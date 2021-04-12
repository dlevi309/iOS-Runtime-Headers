/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSCopying, NSFastEnumeration, NSCopying> {

	NSMutableArray* _records;
	NSMutableDictionary* _additionalRecords;
	NSMutableDictionary* _localResources;
	BOOL _calculateEstimatedBatchSize;
	unsigned long long _estimatedBatchSize;

}

@property (nonatomic,readonly) NSArray * records; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CP9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)redactedDescription;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)records;
-(void)addRecord:(id)arg1 ;
-(void)removeRecordWithScopedIdentifier:(id)arg1 ;
-(id)summaryDescription;
-(id)additionalRecordWithScopedIdentifier:(id)arg1 ;
-(id)initWithRecords:(id)arg1 ;
-(id)_additionalRecords;
-(unsigned long long)estimatedBatchSize;
-(id)cplFullDescription;
-(void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerScopedIdentifier:(id)arg3 changesPerClass:(id)arg4 ;
-(BOOL)sortBatchWithError:(id*)arg1 ;
-(void)extractInitialDownloadBatch:(id*)arg1 shouldConsiderRecordFilter:(/*^block*/id)arg2 ;
-(id)recordWithScopedIdentifier:(id)arg1 ;
-(id)_initWithRecords:(id)arg1 ;
-(void)addRecordsFromBatch:(id)arg1 ;
-(void)removeRecordWithIdentifier:(id)arg1 ;
-(BOOL)hasChangeWithScopedIdentifier:(id)arg1 ;
-(BOOL)hasChangeWithIdentifier:(id)arg1 ;
-(id)additionalRecordWithIdentifier:(id)arg1 ;
-(void)_setAdditionalRecords:(id)arg1 ;
-(void)_addAdditionalRecord:(id)arg1 ;
-(void)_setRecords:(id)arg1 ;
-(id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudScopedIdentifier:(id)arg2 ;
-(void)appendLocalResources:(id)arg1 forItemWithCloudScopedIdentifier:(id)arg2 ;
-(id)_descriptionRedacted:(BOOL)arg1 ;
@end
