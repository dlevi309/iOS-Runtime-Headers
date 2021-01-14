/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataTrackedFacesObjectInternal, NSDictionary;

@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying> {

	AVMetadataTrackedFacesObjectInternal* _trackedFacesObjectInternal;

}

@property (readonly) NSDictionary * payload; 
+(id)trackedFacesWithTime:(SCD_Struct_AV0)arg1 faceKitDictionary:(id)arg2 input:(id)arg3 ;
-(NSDictionary *)payload;
-(id)description;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTime:(SCD_Struct_AV0)arg1 faceKitDictionary:(id)arg2 input:(id)arg3 ;
-(void)dealloc;
@end

