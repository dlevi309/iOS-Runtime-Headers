/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSHashTable;

@interface _HFItemManagerDebugStateDumpController : NSObject {

	NSHashTable* _itemManagers;

}

@property (nonatomic,retain) NSHashTable * itemManagers;              //@synthesize itemManagers=_itemManagers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)registerItemManager:(id)arg1 ;
-(void)setItemManagers:(NSHashTable *)arg1 ;
-(id)_performStateDump;
-(NSHashTable *)itemManagers;
@end

