/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWTrackedFace : NSObject {

	id _trackingID;
	float _trackingDistance;
	CGRect _trackingRect;
	id _detectionID;
	CGRect _detectionRect;
	float _sizeToDistanceMultiplier;
	float _size;
	float _distance;

}

@property (nonatomic,retain) id trackingID;                       //@synthesize trackingID=_trackingID - In the implementation block
@property (assign,nonatomic) float trackingDistance; 
@property (assign,nonatomic) CGRect trackingRect;                 //@synthesize trackingRect=_trackingRect - In the implementation block
@property (nonatomic,readonly) id detectionID;                    //@synthesize detectionID=_detectionID - In the implementation block
@property (assign,nonatomic) CGRect detectionRect; 
@property (nonatomic,readonly) float size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) float distance;                    //@synthesize distance=_distance - In the implementation block
-(float)distance;
-(float)size;
-(id)trackingID;
-(id)initWithDetectionID:(id)arg1 ;
-(CGRect)detectionRect;
-(void)setDetectionRect:(CGRect)arg1 ;
-(float)trackingDistance;
-(void)setTrackingDistance:(float)arg1 ;
-(void)setTrackingID:(id)arg1 ;
-(CGRect)trackingRect;
-(void)setTrackingRect:(CGRect)arg1 ;
-(id)detectionID;
-(void)dealloc;
@end

