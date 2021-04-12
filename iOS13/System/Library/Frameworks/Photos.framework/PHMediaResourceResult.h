/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHCompositeMediaResult.h>

@class PHAssetResource, NSData, NSURL;

@interface PHMediaResourceResult : PHCompositeMediaResult {

	PHAssetResource* _assetResource;
	NSData* _assetResourceData;
	NSURL* _assetResourceFileURL;

}

@property (nonatomic,retain) NSData * assetResourceData;              //@synthesize assetResourceData=_assetResourceData - In the implementation block
@property (nonatomic,copy) NSURL * assetResourceFileURL;              //@synthesize assetResourceFileURL=_assetResourceFileURL - In the implementation block
-(id)exifOrientation;
-(id)imageURL;
-(id)mediaMetadata;
-(id)adjustmentData;
-(id)videoURL;
-(BOOL)containsValidData;
-(id)imageUTI;
-(id)initWithRequestID:(int)arg1 assetResource:(id)arg2 ;
-(NSData *)assetResourceData;
-(void)setAssetResourceData:(NSData *)arg1 ;
-(NSURL *)assetResourceFileURL;
-(void)setAssetResourceFileURL:(NSURL *)arg1 ;
@end

