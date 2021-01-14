/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSURL, NSArray, NSString;

@interface NTKPhotoResourcesManifest : NSObject {

	NSURL* _manifestURL;
	NSArray* _imageList;
	NSString* _assetCollectionIdentifier;
	long long _version;

}

@property (nonatomic,readonly) NSURL * manifestURL;                               //@synthesize manifestURL=_manifestURL - In the implementation block
@property (nonatomic,readonly) NSArray * imageList;                               //@synthesize imageList=_imageList - In the implementation block
@property (nonatomic,readonly) NSString * assetCollectionIdentifier;              //@synthesize assetCollectionIdentifier=_assetCollectionIdentifier - In the implementation block
@property (nonatomic,readonly) long long version;                                 //@synthesize version=_version - In the implementation block
+(id)manifestWithResourceDirectoryURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)manifestURL;
-(long long)version;
-(NSString *)assetCollectionIdentifier;
-(NSArray *)imageList;
-(BOOL)_parseManifest;
@end

