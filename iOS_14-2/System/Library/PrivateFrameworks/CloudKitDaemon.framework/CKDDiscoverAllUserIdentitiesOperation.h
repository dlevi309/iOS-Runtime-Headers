/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDiscoverUserIdentitiesOperation.h>

@class NSMutableDictionary;

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation {

	NSMutableDictionary* _contactIdentifiersByLookupInfo;

}

@property (nonatomic,retain) NSMutableDictionary * contactIdentifiersByLookupInfo;              //@synthesize contactIdentifiersByLookupInfo=_contactIdentifiersByLookupInfo - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)main;
-(void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3 ;
-(void)setContactIdentifiersByLookupInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)contactIdentifiersByLookupInfo;
-(void)_discoverIdentitiesBatched:(id)arg1 ;
@end

