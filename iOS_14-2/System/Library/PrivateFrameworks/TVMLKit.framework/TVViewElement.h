/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKViewElement, NSString, NSArray, NSDictionary, TVViewElementStyle;

@interface TVViewElement : NSObject <NSCopying> {

	BOOL _disabled;
	BOOL _parsedOnce;
	IKViewElement* _element;

}

@property (nonatomic,__weak,readonly) IKViewElement * element;                        //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) long long semanticContentAttribute; 
@property (assign,getter=isParsedOnce,nonatomic) BOOL parsedOnce;                     //@synthesize parsedOnce=_parsedOnce - In the implementation block
@property (nonatomic,readonly) NSString * elementIdentifier; 
@property (nonatomic,readonly) NSString * elementName; 
@property (nonatomic,__weak,readonly) TVViewElement * parentViewElement; 
@property (nonatomic,readonly) NSArray * childViewElements; 
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) TVViewElementStyle * style; 
@property (nonatomic,readonly) NSString * autoHighlightIdentifier; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                         //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) long long updateType; 
@property (nonatomic,readonly) NSDictionary * elementData; 
-(void)setDisabled:(BOOL)arg1 ;
-(IKViewElement *)element;
-(NSString *)elementName;
-(BOOL)isDisabled;
-(NSDictionary *)attributes;
-(long long)updateType;
-(NSString *)elementIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TVViewElementStyle *)style;
-(long long)semanticContentAttribute;
-(id)initWithViewElement:(id)arg1 ;
-(NSString *)autoHighlightIdentifier;
-(NSArray *)childViewElements;
-(void)resetProperty:(long long)arg1 ;
-(NSDictionary *)elementData;
-(TVViewElement *)parentViewElement;
-(void)dispatchEventOfType:(long long)arg1 canBubble:(BOOL)arg2 cancellable:(BOOL)arg3 extraInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)dispatchEventWithName:(id)arg1 canBubble:(BOOL)arg2 cancellable:(BOOL)arg3 extraInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isParsedOnce;
-(void)setParsedOnce:(BOOL)arg1 ;
@end

