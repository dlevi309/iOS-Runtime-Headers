/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)duration:(unsigned char)arg1 ;
-(unsigned char)aspectRatio;
-(id)description;
-(void)stopTiming:(id)arg1 ;
-(id)initForMediaType:(unsigned char)arg1 fileSize:(unsigned long long)arg2 ;
-(id)startTiming:(unsigned char)arg1 subtype:(unsigned char)arg2 ;
-(void)processTimesOfType:(unsigned char)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setAspectRatio:(unsigned char)arg1 ;
@end

