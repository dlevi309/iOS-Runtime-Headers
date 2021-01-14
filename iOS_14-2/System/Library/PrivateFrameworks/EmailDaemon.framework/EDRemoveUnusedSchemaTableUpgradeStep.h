/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(int)_recreateMessagesIndices:(id)arg1 ;
+(int)_dropTable:(id)arg1 connection:(id)arg2 ;
+(int)_dropThreadCategoriesIndex:(id)arg1 ;
+(int)_createTempMessagesTable:(id)arg1 ;
+(int)_copyMessagesData:(id)arg1 ;
+(int)_swapMessagesTables:(id)arg1 ;
+(int)_truncateTable:(id)arg1 connection:(id)arg2 ;
+(int)_recreateThreadsTable:(id)arg1 ;
+(int)_recreateThreadsIndices:(id)arg1 ;
@end

