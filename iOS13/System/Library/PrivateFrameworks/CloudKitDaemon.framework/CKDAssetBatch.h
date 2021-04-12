/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMutableArray, CKDAssetZone, NSData, NSDictionary, CKDAssetTokenRequest, NSArray;

@interface CKDAssetBatch : NSObject {

	BOOL _isFailed;
	BOOL _useMMCSEncryptionV2;
	NSMutableArray* _assetRecords;
	CKDAssetZone* _assetZone;
	NSData* _authPutRequest;
	NSData* _authPutResponse;
	NSDictionary* _authPutResponseHeaders;
	CKDAssetTokenRequest* _assetTokenRequest;

}

@property (nonatomic,retain) NSMutableArray * assetRecords;                                    //@synthesize assetRecords=_assetRecords - In the implementation block
@property (nonatomic,retain) CKDAssetZone * assetZone;                                         //@synthesize assetZone=_assetZone - In the implementation block
@property (nonatomic,retain) NSData * authPutRequest;                                          //@synthesize authPutRequest=_authPutRequest - In the implementation block
@property (nonatomic,retain) NSData * authPutResponse;                                         //@synthesize authPutResponse=_authPutResponse - In the implementation block
@property (nonatomic,retain) NSDictionary * authPutResponseHeaders;                            //@synthesize authPutResponseHeaders=_authPutResponseHeaders - In the implementation block
@property (assign,nonatomic) BOOL isFailed;                                                    //@synthesize isFailed=_isFailed - In the implementation block
@property (assign,nonatomic,__weak) CKDAssetTokenRequest * assetTokenRequest;                  //@synthesize assetTokenRequest=_assetTokenRequest - In the implementation block
@property (readonly) unsigned sizeUpperBound; 
@property (readonly) unsigned size; 
@property (nonatomic,readonly) NSArray * allMMCSItems; 
@property (nonatomic,readonly) NSArray * allMMCSSectionItems; 
@property (nonatomic,readonly) NSArray * allRereferenceMMCSItems; 
@property (assign,nonatomic) BOOL useMMCSEncryptionV2;                                         //@synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2 - In the implementation block
@property (nonatomic,readonly) NSArray * allRegularAndSectionAndRereferenceItems; 
-(id)description;
-(unsigned)size;
-(BOOL)isFailed;
-(id)CKPropertiesDescription;
-(void)setUseMMCSEncryptionV2:(BOOL)arg1 ;
-(BOOL)useMMCSEncryptionV2;
-(NSMutableArray *)assetRecords;
-(unsigned)sizeUpperBound;
-(NSArray *)allMMCSItems;
-(NSArray *)allRereferenceMMCSItems;
-(NSArray *)allMMCSSectionItems;
-(id)allMMCSAndSectionItems;
-(NSArray *)allRegularAndSectionAndRereferenceItems;
-(id)firstMMCSItemError;
-(BOOL)isEmptyOfRereferencesAssets;
-(CKDAssetTokenRequest *)assetTokenRequest;
-(void)setAssetTokenRequest:(CKDAssetTokenRequest *)arg1 ;
-(id)initWithAssetZone:(id)arg1 ;
-(void)addAssetRecord:(id)arg1 ;
-(CKDAssetZone *)assetZone;
-(BOOL)isEmptyOfAssets;
-(void)setIsFailed:(BOOL)arg1 ;
-(NSData *)authPutRequest;
-(void)setAuthPutRequest:(NSData *)arg1 ;
-(BOOL)isRereferenceAssetBatch;
-(NSData *)authPutResponse;
-(void)setAuthPutResponse:(NSData *)arg1 ;
-(void)setAuthPutResponseHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)authPutResponseHeaders;
-(void)setAssetRecords:(NSMutableArray *)arg1 ;
-(BOOL)isPackageSectionBatch;
-(void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)arg1 ;
-(void)setAssetZone:(CKDAssetZone *)arg1 ;
@end

