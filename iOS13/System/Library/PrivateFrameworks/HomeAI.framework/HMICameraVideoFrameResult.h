/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface HMICameraVideoFrameResult : NSObject <NSSecureCoding> {

	unsigned long long _frameId;
	NSDictionary* _annotationScores;
	long long _events;
	NSArray* _detections;
	unsigned long long _frameWidth;
	unsigned long long _frameHeight;
	CGRect _regionOfInterest;

}

@property (readonly) unsigned long long frameId;                   //@synthesize frameId=_frameId - In the implementation block
@property (readonly) NSDictionary * annotationScores;              //@synthesize annotationScores=_annotationScores - In the implementation block
@property (readonly) long long events;                             //@synthesize events=_events - In the implementation block
@property (readonly) NSArray * detections;                         //@synthesize detections=_detections - In the implementation block
@property (readonly) unsigned long long frameWidth;                //@synthesize frameWidth=_frameWidth - In the implementation block
@property (readonly) unsigned long long frameHeight;               //@synthesize frameHeight=_frameHeight - In the implementation block
@property (readonly) CGRect regionOfInterest;                      //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)events;
-(CGRect)regionOfInterest;
-(unsigned long long)frameWidth;
-(unsigned long long)frameHeight;
-(unsigned long long)frameId;
-(NSDictionary *)annotationScores;
-(id)initWithFrameId:(unsigned long long)arg1 events:(long long)arg2 annotationScores:(id)arg3 detections:(id)arg4 regionOfInterest:(CGRect)arg5 frameWidth:(unsigned long long)arg6 frameHeight:(unsigned long long)arg7 ;
-(NSArray *)detections;
@end

