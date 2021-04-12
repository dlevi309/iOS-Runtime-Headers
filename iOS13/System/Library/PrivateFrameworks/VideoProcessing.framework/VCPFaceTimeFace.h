/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(VNFaceprint *)faceprint;
-(void)setFaceprint:(VNFaceprint *)arg1 ;
-(id)managedObjectForContext:(id)arg1 ;
@end

