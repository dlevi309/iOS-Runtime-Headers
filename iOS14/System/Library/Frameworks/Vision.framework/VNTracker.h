/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSUUID, NSString;

@interface VNTracker : NSObject <VNRequestRevisionProviding> {

	shared_ptr<vision::mod::ObjectTrackerAbstract>* mTrackerImpl;
	unsigned long long _requestRevision;
	unsigned _trackedFrameCVPixelBufferFormat;
	long long _trackedFrameNumber;
	NSUUID* _key;
	NSString* _level;
	CGRect _lastTrackedBBox;

}

@property (readonly) BOOL isTracking; 
@property (readonly) BOOL isResettable; 
@property (assign) long long trackedFrameNumber;                                //@synthesize trackedFrameNumber=_trackedFrameNumber - In the implementation block
@property (assign) CGRect lastTrackedBBox;                                      //@synthesize lastTrackedBBox=_lastTrackedBBox - In the implementation block
@property (readonly) NSUUID * key;                                              //@synthesize key=_key - In the implementation block
@property (readonly) NSString * level;                                          //@synthesize level=_level - In the implementation block
@property (assign) unsigned trackedFrameCVPixelBufferFormat;                    //@synthesize trackedFrameCVPixelBufferFormat=_trackedFrameCVPixelBufferFormat - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
+(long long)VNTrackerOptionToTrackerType:(id)arg1 ;
-(BOOL)isTracking;
-(BOOL)reset:(id*)arg1 ;
-(NSString *)level;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(NSUUID *)key;
-(id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)requestRevision;
-(BOOL)isResettable;
-(id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3 ;
-(id)trackInFrame:(id)arg1 error:(id*)arg2 ;
-(unsigned)trackedFrameCVPixelBufferFormat;
-(ObjectTrackerAbstract*)_createTrackerWithLevel:(id)arg1 options:(ObjectTrackerOptions*)arg2 error:(id*)arg3 ;
-(id)_postProcessTrackingResults:(id)arg1 trackerResults:(id)arg2 error:(id*)arg3 ;
-(BOOL)_visionBBoxToTrackerBBox:(id)arg1 trackedObjects:(vector<vision::mod::DetectedObject, std::__1::allocator<vision::mod::DetectedObject> >*)arg2 imageSize:(CGSize)arg3 results:(id)arg4 error:(id*)arg5 ;
-(BOOL)_updateTrackerWithModifiedBBoxForImageBuffer:(id)arg1 error:(id*)arg2 ;
-(void)setTrackedFrameCVPixelBufferFormat:(unsigned)arg1 ;
-(long long)trackedFrameNumber;
-(void)setTrackedFrameNumber:(long long)arg1 ;
-(CGRect)lastTrackedBBox;
-(void)setLastTrackedBBox:(CGRect)arg1 ;
@end

