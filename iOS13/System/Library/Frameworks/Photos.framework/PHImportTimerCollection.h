/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSMutableArray, NSMutableIndexSet;

@interface PHImportTimerCollection : NSObject {

	unsigned char _mediaType;
	unsigned long long _fileSize;
	NSMutableArray* _timers;
	NSMutableIndexSet* _runningTimers;
	unsigned char _aspectRatio;

}

@property (assign) unsigned char aspectRatio;              //@synthesize aspectRatio=_aspectRatio - In the implementation block
-(id)description;
-(unsigned char)aspectRatio;
-(void)setAspectRatio:(unsigned char)arg1 ;
-(id)initForMediaType:(unsigned char)arg1 fileSize:(unsigned long long)arg2 ;
-(id)startTiming:(unsigned char)arg1 subtype:(unsigned char)arg2 ;
-(void)stopTiming:(id)arg1 ;
-(void)processTimesOfType:(unsigned char)arg1 withBlock:(/*^block*/id)arg2 ;
-(double)duration:(unsigned char)arg1 ;
@end

