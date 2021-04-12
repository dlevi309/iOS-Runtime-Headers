/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMyriadSessionMutating.h>

@class AFMyriadSession, NSUUID, NSData, NSDictionary, NSString;

@interface _AFMyriadSessionMutation : NSObject <AFMyriadSessionMutating> {

	AFMyriadSession* _baseModel;
	unsigned long long _generation;
	NSUUID* _sessionId;
	NSUUID* _currentElectionAdvertisementId;
	NSData* _currentElectionAdvertisementData;
	NSDictionary* _electionAdvertisementDataByIds;
	struct {
		unsigned isDirty : 1;
		unsigned hasGeneration : 1;
		unsigned hasSessionId : 1;
		unsigned hasCurrentElectionAdvertisementId : 1;
		unsigned hasCurrentElectionAdvertisementData : 1;
		unsigned hasElectionAdvertisementDataByIds : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSessionId:(id)arg1 ;
-(void)setGeneration:(unsigned long long)arg1 ;
-(id)init;
-(void)setCurrentElectionAdvertisementId:(id)arg1 ;
-(void)setCurrentElectionAdvertisementData:(id)arg1 ;
-(void)setElectionAdvertisementDataByIds:(id)arg1 ;
-(id)generate;
-(id)initWithBaseModel:(id)arg1 ;
@end

