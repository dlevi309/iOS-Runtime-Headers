/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSMutableSet, CPLChangeBatch, NSString;

@interface CPLExtractedBatch : NSObject <NSSecureCoding> {

	NSDictionary* _uploadIdentifiers;
	NSMutableDictionary* _mutableUploadIdentifiers;
	NSSet* _untrustableScopedIdentifiers;
	NSMutableSet* _mutableUntrustableScopedIndentifiers;
	BOOL _resourceSizeIsCalculated;
	unsigned long long _resourceSize;
	BOOL _full;
	BOOL _batchCanLowerQuota;
	CPLChangeBatch* _batch;
	NSString* _clientCacheIdentifier;

}

@property (nonatomic,readonly) CPLChangeBatch * batch;                       //@synthesize batch=_batch - In the implementation block
@property (nonatomic,readonly) unsigned long long resourceSize;              //@synthesize resourceSize=_resourceSize - In the implementation block
@property (assign,getter=isFull,nonatomic) BOOL full;                        //@synthesize full=_full - In the implementation block
@property (nonatomic,readonly) BOOL batchCanLowerQuota;                      //@synthesize batchCanLowerQuota=_batchCanLowerQuota - In the implementation block
@property (nonatomic,copy) NSString * clientCacheIdentifier;                 //@synthesize clientCacheIdentifier=_clientCacheIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(CPLChangeBatch *)batch;
-(BOOL)isFull;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)resourceSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setFull:(BOOL)arg1 ;
-(NSString *)clientCacheIdentifier;
-(id)uploadIdentifiers;
-(unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)arg1 ;
-(id)uploadIdentifierForChange:(id)arg1 ;
-(void)addChange:(id)arg1 fromStorage:(id)arg2 ;
-(void)forceScopeIndexOnAllRecordsTo:(long long)arg1 ;
-(BOOL)batchCanLowerQuota;
-(void)setClientCacheIdentifier:(NSString *)arg1 ;
@end

