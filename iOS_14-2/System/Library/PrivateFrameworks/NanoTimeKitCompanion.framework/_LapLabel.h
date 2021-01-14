/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UILabel.h>

@interface _LapLabel : UILabel {

	BOOL _split;
	unsigned long long _lap;

}

@property (assign,nonatomic) unsigned long long lap;              //@synthesize lap=_lap - In the implementation block
-(unsigned long long)lap;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)split;
-(void)setLap:(unsigned long long)arg1 ;
@end

