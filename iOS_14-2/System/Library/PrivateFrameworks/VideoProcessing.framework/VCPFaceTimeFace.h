/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class VNFaceprint;

@interface VCPFaceTimeFace : NSObject {

	VNFaceprint* _faceprint;

}

@property (nonatomic,retain) VNFaceprint * faceprint;              //@synthesize faceprint=_faceprint - In the implementation block
+(id)face;
+(id)faceFromManagedObject:(id)arg1 ;
-(id)description;
-(void)setFaceprint:(VNFaceprint *)arg1 ;
-(id)managedObjectForContext:(id)arg1 ;
-(VNFaceprint *)faceprint;
@end

