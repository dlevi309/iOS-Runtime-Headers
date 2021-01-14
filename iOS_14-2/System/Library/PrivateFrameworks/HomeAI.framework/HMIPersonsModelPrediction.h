/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSNumber;

@interface HMIPersonsModelPrediction : HMFObject {

	NSUUID* _sourceUUID;
	NSUUID* _personUUID;
	NSNumber* _confidence;
	NSUUID* _linkedEntityUUID;

}

@property (readonly) NSUUID * sourceUUID;                    //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (readonly) NSUUID * personUUID;                    //@synthesize personUUID=_personUUID - In the implementation block
@property (readonly) NSNumber * confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (readonly) NSUUID * linkedEntityUUID;              //@synthesize linkedEntityUUID=_linkedEntityUUID - In the implementation block
-(NSNumber *)confidence;
-(NSUUID *)personUUID;
-(NSUUID *)sourceUUID;
-(NSUUID *)linkedEntityUUID;
-(id)initWithSourceUUID:(id)arg1 personUUID:(id)arg2 confidence:(id)arg3 linkedEntityUUID:(id)arg4 ;
@end

