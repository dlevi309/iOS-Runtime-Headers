/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDesignatorFont:(CLKFont *)arg1 ;
-(void)setThreeDigitFont:(CLKFont *)arg1 ;
-(void)setFourDigitFont:(CLKFont *)arg1 ;
-(CLKFont *)threeDigitFont;
-(CLKFont *)fourDigitFont;
-(CLKFont *)designatorFont;
@end

