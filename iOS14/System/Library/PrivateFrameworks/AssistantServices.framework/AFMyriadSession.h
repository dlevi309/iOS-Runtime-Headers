/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSDictionary;

@interface AFMyriadSession : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _generation;
	NSUUID* _sessionId;
	NSUUID* _currentElectionAdvertisementId;
	NSData* _currentElectionAdvertisementData;
	NSDictionary* _electionAdvertisementDataByIds;

}

@property (nonatomic,readonly) unsigned long long generation;                                   //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionId;                                         //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * currentElectionAdvertisementId;                    //@synthesize currentElectionAdvertisementId=_currentElectionAdvertisementId - In the implementation block
@property (nonatomic,copy,readonly) NSData * currentElectionAdvertisementData;                  //@synthesize currentElectionAdvertisementData=_currentElectionAdvertisementData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * electionAdvertisementDataByIds;              //@synthesize electionAdvertisementDataByIds=_electionAdvertisementDataByIds - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSUUID *)sessionId;
-(unsigned long long)generation;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)currentElectionAdvertisementId;
-(NSData *)currentElectionAdvertisementData;
-(NSDictionary *)electionAdvertisementDataByIds;
-(id)initWithGeneration:(unsigned long long)arg1 sessionId:(id)arg2 currentElectionAdvertisementId:(id)arg3 currentElectionAdvertisementData:(id)arg4 electionAdvertisementDataByIds:(id)arg5 ;
-(id)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

