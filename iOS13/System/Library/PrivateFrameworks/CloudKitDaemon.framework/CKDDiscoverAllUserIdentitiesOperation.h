/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDiscoverUserIdentitiesOperation.h>

@class NSMutableDictionary;

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation {

	NSMutableDictionary* _contactIdentifiersByLookupInfo;

}

@property (nonatomic,retain) NSMutableDictionary * contactIdentifiersByLookupInfo;              //@synthesize contactIdentifiersByLookupInfo=_contactIdentifiersByLookupInfo - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3 ;
-(void)setContactIdentifiersByLookupInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)contactIdentifiersByLookupInfo;
-(void)_discoverIdentitiesBatched:(id)arg1 ;
@end

