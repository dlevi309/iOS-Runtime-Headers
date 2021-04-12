/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@interface MOVStreamOptions : NSObject {

	BOOL _debugMode;

}

@property (readonly) BOOL disableFrameReordering; 
@property (readonly) double bitrateMultiplier; 
@property (readonly) unsigned long long bitrateOverride; 
@property (readonly) BOOL forceColorLossless; 
@property (readonly) BOOL logAppendTimeStamps; 
@property (readonly) BOOL logWriterEvents; 
@property (readonly) BOOL logReaderEvents; 
@property (readonly) BOOL force10bitMonoByVT; 
@property (readonly) BOOL forceLossless8bitMonoByVT; 
@property (readonly) BOOL logPrepareRecording; 
@property (readonly) BOOL skipSourceHint; 
+(id)sharedOptions;
-(id)init;
-(id)localDefaults;
-(BOOL)logWriterEvents;
-(BOOL)logPrepareRecording;
-(BOOL)logAppendTimeStamps;
-(double)bitrateMultiplier;
-(unsigned long long)bitrateOverride;
-(BOOL)disableFrameReordering;
-(BOOL)forceLossless8bitMonoByVT;
-(BOOL)forceColorLossless;
-(BOOL)force10bitMonoByVT;
-(BOOL)skipSourceHint;
-(id)currentOptions;
-(void)registerStandardDefaults;
-(id)standardDefaultValues;
-(void)checkHasValue:(id)arg1 changedForKey:(id)arg2 ;
-(BOOL)logReaderEvents;
@end

