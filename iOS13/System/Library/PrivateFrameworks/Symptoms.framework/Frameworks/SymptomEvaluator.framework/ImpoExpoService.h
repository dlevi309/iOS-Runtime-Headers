/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue;
@class AnalyticsWorkspace, NSObject;

@interface ImpoExpoService : NSObject {

	AnalyticsWorkspace* workspace;
	NSObject*<OS_dispatch_queue> queue;

}
+(id)_supportedClasses;
+(id)impoExpoServiceInWorkspace:(id)arg1 andQueue:(id)arg2 ;
+(BOOL)_supportArchivingOfObject:(id)arg1 ;
-(id)listItemsNameWithPrefix:(id)arg1 sortDescriptor:(id)arg2 ;
-(id)exportAndUnarchiveItemUnderName:(id)arg1 lastUpdated:(id*)arg2 verificationBlock:(/*^block*/id)arg3 ;
-(BOOL)archiveAndImportItemUnderName:(id)arg1 item:(id)arg2 ;
-(id)exportItemUnderName:(id)arg1 lastUpdated:(id*)arg2 verificationBlock:(/*^block*/id)arg3 ;
-(BOOL)importItemUnderName:(id)arg1 item:(id)arg2 ;
-(long long)deleteItemsWithPrefix:(id)arg1 ;
-(id)_nameSubfix;
-(id)_initInWorkspace:(id)arg1 andQueue:(id)arg2 ;
-(id)_locateRecord:(id)arg1 createMissing:(BOOL)arg2 ;
-(void)deleteItemsWithNames:(id)arg1 ;
-(long long)_deleteItemsMatchingPredicate:(id)arg1 ;
-(BOOL)importValueUnderName:(id)arg1 value:(unsigned long long)arg2 ;
-(unsigned long long)exportValueUnderName:(id)arg1 lastUpdated:(id*)arg2 ;
-(long long)deleteItemsWithPrefixes:(id)arg1 ;
@end

