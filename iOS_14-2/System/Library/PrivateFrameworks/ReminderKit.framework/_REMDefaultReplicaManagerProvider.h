/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(REMStore *)store;
-(id)initWithStore:(id)arg1 ;
-(id)unsavedReplicaManagersForAccountIDs:(id)arg1 ;
-(id)replicaManagerForAccountID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

