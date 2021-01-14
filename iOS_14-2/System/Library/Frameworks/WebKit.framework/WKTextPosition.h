/*
* Generated on Thursday, January 14, 2021 at 2:21:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITextPosition.h>

@interface WKTextPosition : UITextPosition {

	CGRect _positionRect;

}

@property (assign,nonatomic) CGRect positionRect;              //@synthesize positionRect=_positionRect - In the implementation block
+(id)textPositionWithRect:(CGRect)arg1 ;
-(id)description;
-(CGRect)positionRect;
-(void)setPositionRect:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

