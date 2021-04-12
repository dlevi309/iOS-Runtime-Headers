/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKFont;

@interface CLKUITimeLabelStyle : NSObject <NSCopying> {

	CLKFont* _threeDigitFont;
	CLKFont* _fourDigitFont;
	CLKFont* _designatorFont;

}

@property (nonatomic,retain) CLKFont * threeDigitFont;              //@synthesize threeDigitFont=_threeDigitFont - In the implementation block
@property (nonatomic,retain) CLKFont * fourDigitFont;               //@synthesize fourDigitFont=_fourDigitFont - In the implementation block
@property (nonatomic,retain) CLKFont * designatorFont;              //@synthesize designatorFont=_designatorFont - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLKFont *)threeDigitFont;
-(void)setThreeDigitFont:(CLKFont *)arg1 ;
-(CLKFont *)fourDigitFont;
-(void)setFourDigitFont:(CLKFont *)arg1 ;
-(CLKFont *)designatorFont;
-(void)setDesignatorFont:(CLKFont *)arg1 ;
@end

