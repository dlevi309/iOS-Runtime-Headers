/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/EDTableUpgradeStep.h>

@class NSString;

@interface MFMailMessageLibrarySetThreadSendersRecipientsConflictResolutionUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)runWithConnection:(id)arg1 ;
+(id)threadSendersTableSchema;
+(id)threadRecipientsTableSchema;
+(id)_schemaWithThreadsTable:(id)arg1 ;
@end

