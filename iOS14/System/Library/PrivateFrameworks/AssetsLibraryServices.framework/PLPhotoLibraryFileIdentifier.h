/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSString;

@interface PLPhotoLibraryFileIdentifier : NSObject {

	unsigned char _bundleScope;
	BOOL _isData;
	unsigned _resourceType;
	unsigned _resourceVersion;
	unsigned _recipeId;
	NSString* _uuid;
	NSString* _uti;
	NSString* _originalFilename;

}

@property (nonatomic,retain) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned char bundleScope;              //@synthesize bundleScope=_bundleScope - In the implementation block
@property (nonatomic,retain) NSString * uti;                           //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSString * originalFilename;              //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,readonly) unsigned resourceType;                  //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) unsigned resourceVersion;               //@synthesize resourceVersion=_resourceVersion - In the implementation block
@property (nonatomic,readonly) unsigned recipeId;                      //@synthesize recipeId=_recipeId - In the implementation block
@property (nonatomic,readonly) BOOL isData;                            //@synthesize isData=_isData - In the implementation block
+(BOOL)isValidOriginalURL:(id)arg1 ;
+(id)fileIdentifierForValidOriginalURL:(id)arg1 ;
+(id)fileIdentifierForValidOriginalURL:(id)arg1 originalsDirectoryName:(id)arg2 ;
+(id)uuidFromURL:(id)arg1 ;
-(NSString *)uti;
-(BOOL)isData;
-(NSString *)uuid;
-(id)init;
-(unsigned)resourceType;
-(unsigned)recipeId;
-(void)setUti:(NSString *)arg1 ;
-(unsigned char)bundleScope;
-(unsigned)resourceVersion;
-(id)initWithAssetUuid:(id)arg1 uti:(id)arg2 resourceVersion:(unsigned)arg3 resourceType:(unsigned)arg4 ;
-(id)initWithAssetUuid:(id)arg1 uti:(id)arg2 resourceVersion:(unsigned)arg3 recipeID:(unsigned)arg4 ;
-(void)setOriginalFilename:(NSString *)arg1 ;
-(id)description;
-(id)extension;
-(NSString *)originalFilename;
-(void)setUuid:(NSString *)arg1 ;
-(id)initWithAssetUuid:(id)arg1 bundleScope:(unsigned char)arg2 uti:(id)arg3 resourceVersion:(unsigned)arg4 resourceType:(unsigned)arg5 recipeID:(unsigned)arg6 originalFilename:(id)arg7 ;
@end

