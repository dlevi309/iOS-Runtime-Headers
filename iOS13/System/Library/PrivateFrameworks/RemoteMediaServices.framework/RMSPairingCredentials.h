/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@interface RMSPairingCredentials : NSObject {

	unsigned long long _requirementType;
	unsigned long long _characterCount;

}

@property (assign,nonatomic) unsigned long long requirementType;              //@synthesize requirementType=_requirementType - In the implementation block
@property (assign,nonatomic) unsigned long long characterCount;               //@synthesize characterCount=_characterCount - In the implementation block
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(unsigned long long)characterCount;
-(void)setCharacterCount:(unsigned long long)arg1 ;
-(void)setRequirementType:(unsigned long long)arg1 ;
-(unsigned long long)requirementType;
@end

