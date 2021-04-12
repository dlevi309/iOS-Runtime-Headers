/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class ARFrame;

@interface AVTFaceTrackingInfo : NSObject {

	SCD_Struct_AV0* _trackingData;
	BOOL _deleteWhenDone;
	ARFrame* _arFrame;
	double _timestamp;

}

@property (nonatomic,readonly) ARFrame * arFrame; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) BOOL hasFaceTrackingData; 
+(id)trackingInfoWithARFrame:(id)arg1 inputOrientation:(long long)arg2 outputOrientation:(long long)arg3 ;
+(id)trackingInfoWithARFrame:(id)arg1 inputOrientation:(long long)arg2 outputOrientation:(long long)arg3 constrainHeadPose:(BOOL)arg4 ;
+(id)trackingInfoWrappingTrackingData:(SCD_Struct_AV0*)arg1 ;
+(id)trackingInfoWithARFrame:(id)arg1 ;
+(id)trackingInfoWithARFrame:(id)arg1 orientation:(long long)arg2 ;
-(void)dealloc;
-(double)timestamp;
-(SCD_Struct_AV0*)trackingData;
-(ARFrame *)arFrame;
-(BOOL)hasFaceTrackingData;
-(void)discardARFrame;
@end

