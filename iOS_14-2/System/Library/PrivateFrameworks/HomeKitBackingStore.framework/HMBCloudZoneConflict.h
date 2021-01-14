/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class CKRecord;

@interface HMBCloudZoneConflict : HMFObject {

	CKRecord* _client;
	CKRecord* _server;
	CKRecord* _ancestor;

}

@property (nonatomic,readonly) CKRecord * client;                //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) CKRecord * server;                //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) CKRecord * ancestor;              //@synthesize ancestor=_ancestor - In the implementation block
-(CKRecord *)client;
-(id)initWithError:(id)arg1 ;
-(CKRecord *)server;
-(id)initWithClientRecord:(id)arg1 serverRecord:(id)arg2 ancestorRecord:(id)arg3 ;
-(CKRecord *)ancestor;
@end

