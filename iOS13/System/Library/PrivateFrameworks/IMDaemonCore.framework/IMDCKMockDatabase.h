/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <CloudKit/CKDatabase.h>

@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase {

	NSDictionary* _identifierToZoneMap;

}

@property (nonatomic,readonly) NSDictionary * identifierToZoneMap;              //@synthesize identifierToZoneMap=_identifierToZoneMap - In the implementation block
-(id)init;
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(id)_initWithContainer:(id)arg1 scope:(long long)arg2 ;
-(id)_zoneManager;
-(id)_zoneIdentifierForOperation:(id)arg1 ;
-(NSDictionary *)identifierToZoneMap;
@end

