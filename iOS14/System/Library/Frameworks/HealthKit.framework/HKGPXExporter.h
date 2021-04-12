/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class HKWorkoutRoute, NSFileHandle, NSISO8601DateFormatter, NSURL;

@interface HKGPXExporter : NSObject {

	HKWorkoutRoute* _route;
	NSFileHandle* _fileHandle;
	NSISO8601DateFormatter* _isoFormatter;
	BOOL _isFinished;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;               //@synthesize isFinished=_isFinished - In the implementation block
+(id)_displayNameForRoute:(id)arg1 ;
+(id)fileNameForRoute:(id)arg1 ;
-(BOOL)_appendGPXHeaderWithError:(id*)arg1 ;
-(id)_trackpointEntryForLocation:(id)arg1 ;
-(BOOL)_appendString:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 route:(id)arg2 ;
-(BOOL)appendLocations:(id)arg1 error:(id*)arg2 ;
-(BOOL)isFinished;
-(NSURL *)URL;
-(BOOL)finishWithError:(id*)arg1 ;
@end

