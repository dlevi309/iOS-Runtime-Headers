/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)uniformTypeIdentifier;
-(id)adjustmentData;
-(id)mediaMetadata;
-(id)exifOrientation;
-(id)initWithRequestID:(int)arg1 assetResource:(id)arg2 ;
-(NSData *)assetResourceData;
-(void)setAssetResourceData:(NSData *)arg1 ;
-(NSURL *)assetResourceFileURL;
-(void)setAssetResourceFileURL:(NSURL *)arg1 ;
-(BOOL)containsValidData;
-(id)videoURL;
-(id)imageURL;
@end

