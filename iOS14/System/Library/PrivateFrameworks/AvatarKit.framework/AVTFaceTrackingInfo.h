/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class ARFrame;

@interface AVTFaceTrackingInfo : NSObject {

	SCD_Struct_AV1* _trackingData;
	BOOL _deleteWhenDone;
	ARFrame* _arFrame;
	double _timestamp;

}

@property (nonatomic,readonly) ARFrame * arFrame; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) BOOL hasFaceTrackingData; 
+(id)trackingInfoWithARFrame:(id)arg1 inputOrientation:(long long)arg2 outputOrientation:(long long)arg3 ;
+(id)trackingInfoWithARFrame:(id)arg1 inputOrientation:(long long)arg2 outputOrientation:(long long)arg3 constrainHeadPose:(BOOL)arg4 ;
+(id)trackingInfoWrappingTrackingData:(SCD_Struct_AV1*)arg1 ;
+(id)trackingInfoWithARFrame:(id)arg1 ;
+(id)trackingInfoWithARFrame:(id)arg1 orientation:(long long)arg2 ;
-(double)timestamp;
-(ARFrame *)arFrame;
-(void)dealloc;
-(SCD_Struct_AV1*)trackingData;
-(BOOL)hasFaceTrackingData;
-(void)discardARFrame;
@end

