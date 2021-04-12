/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@class NSDate, NSUUID;

@interface MSPCloudClientRegistrationRecord : NSObject {

	BOOL _isChanged;
	NSDate* _lastRegistrationDate;
	NSUUID* _clientIdentifier;
	unsigned long long _desiredEpoch;
	unsigned long long _earliestCompatibleEpoch;

}

@property (nonatomic,retain) NSUUID * clientIdentifier;                               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long desiredEpoch;                         //@synthesize desiredEpoch=_desiredEpoch - In the implementation block
@property (assign,nonatomic) unsigned long long earliestCompatibleEpoch;              //@synthesize earliestCompatibleEpoch=_earliestCompatibleEpoch - In the implementation block
@property (nonatomic,readonly) BOOL isChanged;                                        //@synthesize isChanged=_isChanged - In the implementation block
@property (nonatomic,retain) NSDate * lastRegistrationDate;                           //@synthesize lastRegistrationDate=_lastRegistrationDate - In the implementation block
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSUUID *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)recordRepresentation;
-(unsigned long long)earliestCompatibleEpoch;
-(void)setEarliestCompatibleEpoch:(unsigned long long)arg1 ;
-(void)setDesiredEpoch:(unsigned long long)arg1 ;
-(void)setLastRegistrationDate:(NSDate *)arg1 ;
-(NSDate *)lastRegistrationDate;
-(unsigned long long)desiredEpoch;
-(BOOL)isChanged;
@end

