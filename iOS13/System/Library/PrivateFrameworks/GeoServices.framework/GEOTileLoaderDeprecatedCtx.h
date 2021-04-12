/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList;

@interface GEOTileLoaderDeprecatedCtx : NSObject {

	CFRunLoopRef _runloop;
	GEOTileKeyList* _originalList;
	GEOTileKeyList* _submittedList;
	GEOTileKeyList* _satisfiedList;
	GEOTileKeyList* _notLoaded;
	/*^block*/id _callback;
	/*^block*/id _progress;
	/*^block*/id _error;
	/*^block*/id _finished;

}

@property (nonatomic,copy) id progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id error;                 //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id finished;              //@synthesize finished=_finished - In the implementation block
@property (nonatomic,copy) id callback;              //@synthesize callback=_callback - In the implementation block
-(void)dealloc;
-(id)error;
-(void)cancel;
-(void)setError:(id)arg1 ;
-(void)setFinished:(id)arg1 ;
-(id)finished;
-(id)progress;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setProgress:(id)arg1 ;
-(id)initWithList:(id)arg1 ;
-(void)success:(const GEOTileKey*)arg1 tile:(id)arg2 info:(id)arg3 ;
-(void)failure:(const GEOTileKey*)arg1 error:(id)arg2 info:(id)arg3 ;
-(void)breakCycle;
@end

