/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSUUID;

@interface PLCloudChangeHubClient : NSObject {

	unsigned char _nodeUUID[16];
	NSUUID* _uuid;

}

@property (copy,readonly) NSUUID * uuid;              //@synthesize uuid=_uuid - In the implementation block
-(id)init;
-(NSUUID *)uuid;
-(id)initWithUUID:(id)arg1 ;
-(id)fetchResultsSinceIndex:(unsigned long long)arg1 ;
-(id)fetchPendingEventsSinceIndex:(unsigned long long)arg1 ;
-(id)resultsFromReply:(id)arg1 sinceIndex:(unsigned long long)arg2 ;
-(id)successfulResultWithEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2 ;
-(id)unsuccesfulResultWithWithType:(long long)arg1 ;
@end

