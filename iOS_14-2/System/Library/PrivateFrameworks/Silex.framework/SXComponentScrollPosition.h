/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXScrollPosition.h>

@class NSString;

@interface SXComponentScrollPosition : SXScrollPosition {

	NSString* _componentIdentifier;
	double _relativePageOffset;
	double _canvasWidth;

}

@property (nonatomic,copy,readonly) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,readonly) double relativePageOffset;                        //@synthesize relativePageOffset=_relativePageOffset - In the implementation block
@property (nonatomic,readonly) double canvasWidth;                               //@synthesize canvasWidth=_canvasWidth - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)componentIdentifier;
-(id)initWithComponentIdentifier:(id)arg1 canvasWidth:(double)arg2 relativePageOffset:(double)arg3 ;
-(double)canvasWidth;
-(double)relativePageOffset;
-(id)initWithDictionaryRepresentation:(id)arg1 exactly:(BOOL)arg2 ;
-(BOOL)jsonDictionaryRepresentationIsValid:(id)arg1 exactly:(BOOL)arg2 ;
@end

