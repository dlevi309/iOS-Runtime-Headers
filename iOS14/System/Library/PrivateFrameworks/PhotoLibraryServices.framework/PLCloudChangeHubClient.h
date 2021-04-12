/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSUUID;

@interface PLCloudChangeHubClient : NSObject {

	unsigned char _nodeUUID[16];
	NSUUID* _uuid;

}

@property (copy,readonly) NSUUID * uuid;              //@synthesize uuid=_uuid - In the implementation block
-(NSUUID *)uuid;
-(id)init;
-(id)fetchPendingEventsSinceIndex:(unsigned long long)arg1 ;
-(id)resultsFromReply:(id)arg1 sinceIndex:(unsigned long long)arg2 ;
-(id)successfulResultWithEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2 ;
-(id)unsuccesfulResultWithWithType:(long long)arg1 ;
-(id)fetchResultsSinceIndex:(unsigned long long)arg1 ;
-(id)initWithUUID:(id)arg1 ;
@end

