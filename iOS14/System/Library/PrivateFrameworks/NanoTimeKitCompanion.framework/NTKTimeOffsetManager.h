/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKTimeOffsetManager : NSObject {

	double _timeOffset;

}

@property (assign,nonatomic) double timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
+(id)sharedManager;
-(id)init;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(void)dealloc;
-(id)displayTimeForRealTime:(id)arg1 ;
-(id)faceDisplayTime;
-(void)_loadTimeOffset;
-(void)_handleFaceDefaultsChanged;
-(void)_handleFaceLibraryReloaded;
-(void)_updateTimeOffset:(BOOL)arg1 ;
-(void)forceUpdateTimeOffset;
@end

