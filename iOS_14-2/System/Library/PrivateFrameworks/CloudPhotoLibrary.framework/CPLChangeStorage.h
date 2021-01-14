/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSString;

@interface CPLChangeStorage : NSObject

@property (nonatomic,readonly) NSString * storageDescription; 
-(id)changeWithScopedIdentifier:(id)arg1 ;
-(BOOL)hasChangesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(BOOL)getRelatedScopedIdentifier:(id*)arg1 forRecordWithScopedIdentifier:(id)arg2 ;
-(BOOL)getStoredChangeType:(unsigned long long*)arg1 forRecordWithScopedIdentifier:(id)arg2 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(NSString *)storageDescription;
@end

