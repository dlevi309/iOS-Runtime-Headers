/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue;
@class AnalyticsWorkspace, NSObject;

@interface ImpoExpoService : NSObject {

	AnalyticsWorkspace* workspace;
	NSObject*<OS_dispatch_queue> queue;

}
+(BOOL)_supportArchivingOfObject:(id)arg1 ;
+(id)impoExpoServiceInWorkspace:(id)arg1 andQueue:(id)arg2 ;
+(id)_supportedClasses;
-(long long)deleteItemsWithPrefix:(id)arg1 ;
-(id)_nameSubfix;
-(BOOL)archiveAndImportItemUnderName:(id)arg1 item:(id)arg2 ;
-(id)exportAndUnarchiveItemUnderName:(id)arg1 lastUpdated:(id*)arg2 verificationBlock:(/*^block*/id)arg3 ;
-(id)_initInWorkspace:(id)arg1 andQueue:(id)arg2 ;
-(long long)deleteItemsWithNames:(id)arg1 ;
-(id)listItemsNameWithPrefix:(id)arg1 sortDescriptor:(id)arg2 ;
-(BOOL)importValueUnderName:(id)arg1 value:(unsigned long long)arg2 ;
-(id)exportItemUnderName:(id)arg1 lastUpdated:(id*)arg2 verificationBlock:(/*^block*/id)arg3 ;
-(id)_locateRecord:(id)arg1 createMissing:(BOOL)arg2 ;
-(long long)deleteItemsWithPrefixes:(id)arg1 ;
-(BOOL)importItemUnderName:(id)arg1 item:(id)arg2 ;
-(long long)_deleteItemsMatchingPredicate:(id)arg1 ;
-(unsigned long long)exportValueUnderName:(id)arg1 lastUpdated:(id*)arg2 ;
@end

