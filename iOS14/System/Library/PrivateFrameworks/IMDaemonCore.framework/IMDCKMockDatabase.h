/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <CloudKit/CKDatabase.h>

@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase {

	NSDictionary* _identifierToZoneMap;

}

@property (nonatomic,readonly) NSDictionary * identifierToZoneMap;              //@synthesize identifierToZoneMap=_identifierToZoneMap - In the implementation block
-(id)init;
-(void)addOperation:(id)arg1 ;
-(id)_initWithContainer:(id)arg1 scope:(long long)arg2 ;
-(void)dealloc;
-(id)_zoneManager;
-(id)_zoneIdentifierForOperation:(id)arg1 ;
-(NSDictionary *)identifierToZoneMap;
@end

