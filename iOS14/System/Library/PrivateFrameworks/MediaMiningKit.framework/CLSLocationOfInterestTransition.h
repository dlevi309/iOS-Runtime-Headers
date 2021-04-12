/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSUUID, NSDateInterval;

@interface CLSLocationOfInterestTransition : NSObject {

	NSUUID* _identifier;
	NSDateInterval* _transitionInterval;
	long long _transportationMode;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDateInterval * transitionInterval;              //@synthesize transitionInterval=_transitionInterval - In the implementation block
@property (nonatomic,readonly) long long transportationMode;                     //@synthesize transportationMode=_transportationMode - In the implementation block
-(id)description;
-(unsigned long long)hash;
-(long long)transportationMode;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSDateInterval *)transitionInterval;
-(id)initWithIdentifier:(id)arg1 transitionInterval:(id)arg2 transportationMode:(long long)arg3 ;
@end

