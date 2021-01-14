/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSDictionary* _recordWithStatusChangesToNotify;

}

@property (nonatomic,readonly) CPLChangeBatch * diffBatch;                                  //@synthesize diffBatch=_diffBatch - In the implementation block
@property (nonatomic,readonly) NSDictionary * uploadIdentifiers;                            //@synthesize uploadIdentifiers=_uploadIdentifiers - In the implementation block
@property (nonatomic,readonly) NSArray * addedRecords;                                      //@synthesize addedRecords=_addedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * updatedRecords;                                    //@synthesize updatedRecords=_updatedRecords - In the implementation block
@property (nonatomic,readonly) NSArray * deletedRecordScopedIdentifiers;                    //@synthesize deletedRecordScopedIdentifiers=_deletedRecordScopedIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * unquarantinedRecordScopedIdentifiers;                //@synthesize unquarantinedRecordScopedIdentifiers=_unquarantinedRecordScopedIdentifiers - In the implementation block
@property (nonatomic,readonly) NSDictionary * recordWithStatusChangesToNotify;              //@synthesize recordWithStatusChangesToNotify=_recordWithStatusChangesToNotify - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)updatedRecords;
-(NSArray *)addedRecords;
-(id)initWithCoder:(id)arg1 ;
-(id)statusDescription;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1 ;
-(id)initWithPushSessionTracker:(id)arg1 error:(id*)arg2 ;
-(CPLChangeBatch *)diffBatch;
-(NSDictionary *)uploadIdentifiers;
-(NSArray *)deletedRecordScopedIdentifiers;
-(NSSet *)unquarantinedRecordScopedIdentifiers;
-(NSDictionary *)recordWithStatusChangesToNotify;
@end

