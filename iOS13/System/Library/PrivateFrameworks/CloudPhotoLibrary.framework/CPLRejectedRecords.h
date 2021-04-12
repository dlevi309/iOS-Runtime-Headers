/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {

	NSMutableDictionary* _records;
	NSMutableDictionary* _reasons;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)recordWithScopedIdentifier:(id)arg1 ;
-(void)removeRejectedRecordsWithScopedIdentifiers:(id)arg1 ;
-(void)enumerateRecordsAndReasonsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)rejectsTheSameRecordsAs:(id)arg1 ;
-(id)rejectedDescriptions;
@end

