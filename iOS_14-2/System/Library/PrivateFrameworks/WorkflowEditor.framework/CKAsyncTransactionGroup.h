/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class NSHashTable;

@interface CKAsyncTransactionGroup : NSObject {

	NSHashTable* _containerLayers;

}
+(id)mainTransactionGroup;
+(void)registerTransactionGroupAsMainRunloopObserver:(id)arg1 ;
-(void)commit;
-(id)init;
-(void)addTransactionContainer:(id)arg1 ;
@end

