/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UILabel.h>

@interface _LapLabel : UILabel {

	BOOL _split;
	unsigned long long _lap;

}

@property (assign,nonatomic) unsigned long long lap;              //@synthesize lap=_lap - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)split;
-(void)setLap:(unsigned long long)arg1 ;
-(unsigned long long)lap;
@end

