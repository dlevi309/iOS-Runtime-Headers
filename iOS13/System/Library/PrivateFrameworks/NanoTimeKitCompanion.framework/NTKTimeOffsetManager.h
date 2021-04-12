/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKTimeOffsetManager : NSObject {

	double _timeOffset;

}

@property (assign,nonatomic) double timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)setTimeOffset:(double)arg1 ;
-(double)timeOffset;
-(id)displayTimeForRealTime:(id)arg1 ;
-(id)faceDisplayTime;
-(void)_loadTimeOffset;
-(void)_handleFaceDefaultsChanged;
-(void)_handleFaceLibraryReloaded;
-(void)_updateTimeOffset:(BOOL)arg1 ;
-(void)forceUpdateTimeOffset;
@end

