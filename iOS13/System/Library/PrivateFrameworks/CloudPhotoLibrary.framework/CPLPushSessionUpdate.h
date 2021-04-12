/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch, NSDictionary, NSArray, NSSet;

@interface CPLPushSessionUpdate : CPLChangeSessionUpdate {

	CPLChangeBatch* _diffBatch;
	NSDictionary* _uploadIdentifiers;
	NSArray* _addedRecords;
	NSArray* _updatedRecords;
	NSArray* _deletedRecordScopedIdentifiers;
	NSSet* _unquarantinedRecordScopedIdentifiers;

}

@property (nonatomic,readonly) CPLChangeBatch * diffBatch;                                //@synthesize diffBatch=_diffBatch - In the implementation block
@property (nonatomic,readonly) NSDictionary * uploadIdentifiers;                          //@synthesize uploadIdentifiers=_uploadIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * addedRecords;                                    //@synthesize addedRecords=_addedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRecords;                                  //@synthesize updatedRecords=_updatedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * deletedRecordScopedIdentifiers;                  //@synthesize deletedRecordScopedIdentifiers=_deletedRecordScopedIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * unquarantinedRecordScopedIdentifiers;              //@synthesize unquarantinedRecordScopedIdentifiers=_unquarantinedRecordScopedIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)updatedRecords;
-(id)statusDescription;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1 ;
-(id)initWithPushSessionTracker:(id)arg1 error:(id*)arg2 ;
-(CPLChangeBatch *)diffBatch;
-(NSDictionary *)uploadIdentifiers;
-(NSArray *)addedRecords;
-(NSArray *)deletedRecordScopedIdentifiers;
-(NSSet *)unquarantinedRecordScopedIdentifiers;
@end

