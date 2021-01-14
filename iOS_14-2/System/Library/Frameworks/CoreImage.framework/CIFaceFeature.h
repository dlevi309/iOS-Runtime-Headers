/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>

@class NSDictionary;

@interface CIFaceFeature : CIFeature {

	CGRect bounds;
	BOOL hasLeftEyePosition;
	CGPoint leftEyePosition;
	BOOL hasRightEyePosition;
	CGPoint rightEyePosition;
	BOOL hasMouthPosition;
	CGPoint mouthPosition;
	BOOL hasTrackingID;
	int trackingID;
	BOOL hasTrackingFrameCount;
	int trackingFrameCount;
	BOOL hasFaceAngle;
	float faceAngle;
	BOOL hasSmile;
	BOOL leftEyeClosed;
	BOOL rightEyeClosed;
	NSDictionary* landmarks;

}

@property (readonly) NSDictionary * landmarks; 
@property (readonly) CGRect bounds; 
@property (readonly) BOOL hasLeftEyePosition; 
@property (readonly) CGPoint leftEyePosition; 
@property (readonly) BOOL hasRightEyePosition; 
@property (readonly) CGPoint rightEyePosition; 
@property (readonly) BOOL hasMouthPosition; 
@property (readonly) CGPoint mouthPosition; 
@property (readonly) BOOL hasTrackingID; 
@property (readonly) int trackingID; 
@property (readonly) BOOL hasTrackingFrameCount; 
@property (readonly) int trackingFrameCount; 
@property (readonly) BOOL hasFaceAngle; 
@property (readonly) float faceAngle; 
@property (readonly) BOOL hasSmile; 
@property (readonly) BOOL leftEyeClosed; 
@property (readonly) BOOL rightEyeClosed; 
-(CGRect)bounds;
-(id)initWithBounds:(CGRect)arg1 hasLeftEyePosition:(BOOL)arg2 leftEyePosition:(CGPoint)arg3 hasRightEyePosition:(BOOL)arg4 rightEyePosition:(CGPoint)arg5 hasMouthPosition:(BOOL)arg6 mouthPosition:(CGPoint)arg7 hasFaceAngle:(BOOL)arg8 faceAngle:(float)arg9 hasTrackingID:(BOOL)arg10 trackingID:(int)arg11 hasTrackingFrameCount:(BOOL)arg12 trackingFrameCount:(int)arg13 hasSmile:(BOOL)arg14 leftEyeClosed:(BOOL)arg15 rightEyeClosed:(BOOL)arg16 landmarks:(id)arg17 ;
-(BOOL)hasSmile;
-(id)type;
-(NSDictionary *)landmarks;
-(int)trackingID;
-(BOOL)hasLeftEyePosition;
-(BOOL)hasRightEyePosition;
-(BOOL)hasFaceAngle;
-(CGPoint)leftEyePosition;
-(CGPoint)rightEyePosition;
-(float)faceAngle;
-(BOOL)hasMouthPosition;
-(CGPoint)mouthPosition;
-(BOOL)hasTrackingID;
-(BOOL)hasTrackingFrameCount;
-(int)trackingFrameCount;
-(BOOL)leftEyeClosed;
-(BOOL)rightEyeClosed;
-(void)dealloc;
@end

