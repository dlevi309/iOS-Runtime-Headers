/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKViewElement *)element;
-(NSDictionary *)attributes;
-(TVViewElementStyle *)style;
-(BOOL)isDisabled;
-(void)setDisabled:(BOOL)arg1 ;
-(long long)semanticContentAttribute;
-(long long)updateType;
-(NSString *)elementName;
-(void)resetProperty:(long long)arg1 ;
-(NSString *)autoHighlightIdentifier;
-(id)initWithViewElement:(id)arg1 ;
-(NSArray *)childViewElements;
-(NSString *)elementIdentifier;
-(NSDictionary *)elementData;
-(TVViewElement *)parentViewElement;
-(void)dispatchEventOfType:(long long)arg1 canBubble:(BOOL)arg2 cancellable:(BOOL)arg3 extraInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)dispatchEventWithName:(id)arg1 canBubble:(BOOL)arg2 cancellable:(BOOL)arg3 extraInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isParsedOnce;
-(void)setParsedOnce:(BOOL)arg1 ;
@end

