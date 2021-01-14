/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSyncChangeStore.h>

@class NSMutableArray, NSString;

@interface MTInMemorySyncChangeStore : NSObject <MTSyncChangeStore> {

	NSMutableArray* _changes;

}

@property (nonatomic,retain) NSMutableArray * changes;              //@synthesize changes=_changes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)changes;
-(id)init;
-(void)setChanges:(NSMutableArray *)arg1 ;
-(void)persistChanges:(id)arg1 ;
-(id)loadChanges;
@end

