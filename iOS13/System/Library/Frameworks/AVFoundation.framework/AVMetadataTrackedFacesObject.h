/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataTrackedFacesObjectInternal, NSDictionary;

@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying> {

	AVMetadataTrackedFacesObjectInternal* _trackedFacesObjectInternal;

}

@property (readonly) NSDictionary * payload; 
+(id)trackedFacesWithTime:(SCD_Struct_AV7)arg1 faceKitDictionary:(id)arg2 input:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)payload;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithTime:(SCD_Struct_AV7)arg1 faceKitDictionary:(id)arg2 input:(id)arg3 ;
@end

