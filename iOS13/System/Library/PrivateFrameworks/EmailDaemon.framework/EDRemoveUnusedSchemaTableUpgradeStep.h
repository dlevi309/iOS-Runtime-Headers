/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDTableUpgradeStep.h>

@class NSString;

@interface EDRemoveUnusedSchemaTableUpgradeStep : NSObject <EFLoggable, EDTableUpgradeStep>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(int)runWithConnection:(id)arg1 ;
+(int)_dropTable:(id)arg1 connection:(id)arg2 ;
+(int)_dropThreadCategoriesIndex:(id)arg1 ;
+(int)_createTempMessagesTable:(id)arg1 ;
+(int)_recreateMessagesIndices:(id)arg1 ;
+(int)_copyMessagesData:(id)arg1 ;
+(int)_swapMessagesTables:(id)arg1 ;
+(int)_truncateTable:(id)arg1 connection:(id)arg2 ;
+(int)_recreateThreadsTable:(id)arg1 ;
+(int)_recreateThreadsIndices:(id)arg1 ;
@end

