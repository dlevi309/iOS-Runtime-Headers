/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <ClockKit/CLKImageProvider.h>

@interface NTKWorkoutComplicationImageProvider : CLKImageProvider {

	BOOL _paused;
	BOOL _frozen;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;              //@synthesize frozen=_frozen - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPaused;
-(BOOL)isFrozen;
-(void)setPaused:(BOOL)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
@end

