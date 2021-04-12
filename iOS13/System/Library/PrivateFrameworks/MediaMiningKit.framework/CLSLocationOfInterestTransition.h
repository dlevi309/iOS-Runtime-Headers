/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)identifier;
-(NSDateInterval *)transitionInterval;
-(long long)transportationMode;
-(id)initWithIdentifier:(id)arg1 transitionInterval:(id)arg2 transportationMode:(long long)arg3 ;
@end

