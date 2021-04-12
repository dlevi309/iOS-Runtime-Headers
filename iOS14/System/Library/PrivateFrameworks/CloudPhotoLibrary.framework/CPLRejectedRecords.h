/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {

	NSMutableDictionary* _records;
	NSMutableDictionary* _reasons;

}
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(id)recordWithScopedIdentifier:(id)arg1 ;
-(void)removeRejectedRecordsWithScopedIdentifiers:(id)arg1 ;
-(void)enumerateRecordsAndReasonsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)rejectsTheSameRecordsAs:(id)arg1 ;
-(id)rejectedDescriptions;
@end

