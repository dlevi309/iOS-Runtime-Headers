/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


@class NSHashTable, NSMutableArray;

@interface CCVegaTransactionCommitter : NSObject {

	NSHashTable* _renderers;
	NSMutableArray* _mainThreadOperations;
	BOOL _needsCATransaction;

}
-(void)commit;
-(id)initWithRenderers:(id)arg1 ;
-(id)newMainThreadOperation;
-(void)setNeedsCATransaction;
@end

