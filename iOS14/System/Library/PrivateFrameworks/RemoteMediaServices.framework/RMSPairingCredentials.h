/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@interface RMSPairingCredentials : NSObject {

	unsigned long long _requirementType;
	unsigned long long _characterCount;

}

@property (assign,nonatomic) unsigned long long requirementType;              //@synthesize requirementType=_requirementType - In the implementation block
@property (assign,nonatomic) unsigned long long characterCount;               //@synthesize characterCount=_characterCount - In the implementation block
-(unsigned long long)characterCount;
-(void)setCharacterCount:(unsigned long long)arg1 ;
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setRequirementType:(unsigned long long)arg1 ;
-(unsigned long long)requirementType;
@end

