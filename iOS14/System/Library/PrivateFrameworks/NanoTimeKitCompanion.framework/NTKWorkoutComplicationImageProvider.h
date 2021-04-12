/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFrozen:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPaused;
-(BOOL)isFrozen;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPaused:(BOOL)arg1 frozen:(BOOL)arg2 ;
@end

