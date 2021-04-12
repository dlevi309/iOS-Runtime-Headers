/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDCKSyncTokenStore.h>

@protocol IMDCKSyncTokenStore <NSObject>
@required
-(void)migrateKey:(id)arg1 fromDatabase:(id)arg2;
-(id)tokenForKey:(id)arg1;
-(void)persistToken:(id)arg1 forKey:(id)arg2;

@end


@class NSString;

@interface IMDCKSyncTokenStore : NSObject <IMDCKSyncTokenStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)migrateKey:(id)arg1 fromDatabase:(id)arg2 ;
+(id)tokenForKey:(id)arg1 ;
+(void)persistToken:(id)arg1 forKey:(id)arg2 ;
-(void)migrateKey:(id)arg1 fromDatabase:(id)arg2 ;
-(id)tokenForKey:(id)arg1 ;
-(void)persistToken:(id)arg1 forKey:(id)arg2 ;
@end

