/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXScrollPosition.h>

@class NSString;

@interface SXComponentScrollPosition : SXScrollPosition {

	NSString* _componentIdentifier;
	double _relativePageOffset;
	double _canvasWidth;

}

@property (nonatomic,retain) NSString * componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (assign,nonatomic) double relativePageOffset;                   //@synthesize relativePageOffset=_relativePageOffset - In the implementation block
@property (assign,nonatomic) double canvasWidth;                          //@synthesize canvasWidth=_canvasWidth - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)componentIdentifier;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(void)setRelativePageOffset:(double)arg1 ;
-(void)setCanvasWidth:(double)arg1 ;
-(double)canvasWidth;
-(double)relativePageOffset;
@end

