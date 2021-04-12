/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMICameraVideoFrame, NSDictionary, NSArray, NSSet;

@interface HMICameraVideoFrameResult : NSObject <NSSecureCoding> {

	HMICameraVideoFrame* _frame;
	NSDictionary* _annotationScores;
	long long _events;
	NSArray* _detections;
	NSSet* _faceClassifications;
	NSSet* _analyzerEvents;
	CGRect _regionOfInterest;

}

@property (readonly) HMICameraVideoFrame * frame;                  //@synthesize frame=_frame - In the implementation block
@property (readonly) NSDictionary * annotationScores;              //@synthesize annotationScores=_annotationScores - In the implementation block
@property (readonly) long long events;                             //@synthesize events=_events - In the implementation block
@property (readonly) NSArray * detections;                         //@synthesize detections=_detections - In the implementation block
@property (readonly) CGRect regionOfInterest;                      //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
@property (readonly) NSSet * faceClassifications;                  //@synthesize faceClassifications=_faceClassifications - In the implementation block
@property (readonly) NSSet * analyzerEvents;                       //@synthesize analyzerEvents=_analyzerEvents - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)_eventsFromAnalyzerEvents:(id)arg1 ;
+(id)_annotationScoresFromAnalyzerEvents:(id)arg1 ;
+(id)_detectionsFromAnalyzerEvents:(id)arg1 ;
+(id)_faceClassificationsFromAnalyzerEvents:(id)arg1 ;
-(CGRect)regionOfInterest;
-(void)encodeWithCoder:(id)arg1 ;
-(HMICameraVideoFrame *)frame;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)events;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)faceClassifications;
-(NSSet *)analyzerEvents;
-(id)maxConfidenceEventForEventClass:(Class)arg1 ;
-(long long)confidenceThatEventOccurred:(long long)arg1 ;
-(NSDictionary *)annotationScores;
-(id)initWithFrame:(id)arg1 events:(long long)arg2 annotationScores:(id)arg3 detections:(id)arg4 regionOfInterest:(CGRect)arg5 faceClassifications:(id)arg6 ;
-(id)initWithFrame:(id)arg1 regionOfInterest:(CGRect)arg2 analyzerEvents:(id)arg3 ;
-(NSArray *)detections;
@end

