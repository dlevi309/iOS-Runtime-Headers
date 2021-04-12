/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch;

@interface CPLPullSessionUpdate : CPLChangeSessionUpdate {

	CPLChangeBatch* _clientBatch;
	CPLChangeBatch* _cloudBatch;

}

@property (nonatomic,readonly) CPLChangeBatch * clientBatch;              //@synthesize clientBatch=_clientBatch - In the implementation block
@property (nonatomic,readonly) CPLChangeBatch * cloudBatch;               //@synthesize cloudBatch=_cloudBatch - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)statusDescription;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1 ;
-(id)initWithStore:(id)arg1 expandedClientBatch:(id)arg2 expandedCloudBatch:(id)arg3 ;
-(CPLChangeBatch *)clientBatch;
-(CPLChangeBatch *)cloudBatch;
@end

