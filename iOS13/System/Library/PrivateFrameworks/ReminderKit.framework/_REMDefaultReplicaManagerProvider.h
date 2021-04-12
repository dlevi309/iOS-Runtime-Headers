/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMReplicaManagerProviding.h>

@class REMStore, NSString;

@interface _REMDefaultReplicaManagerProvider : NSObject <REMReplicaManagerProviding> {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;                    //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(REMStore *)store;
-(id)unsavedReplicaManagersForAccountIDs:(id)arg1 ;
-(id)replicaManagerForAccountID:(id)arg1 ;
@end

