/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/


#import <SPOwner/SPOwner-Structs.h>
@class NSUUID;

@interface SPKeyIndexMap : NSObject {

	SCD_Struct_SP1* _mapHandle;
	unsigned char _sequence;
	NSUUID* _beaconIdentifier;

}

@property (readonly) NSUUID * beaconIdentifier;              //@synthesize beaconIdentifier=_beaconIdentifier - In the implementation block
@property (readonly) unsigned char sequence;                 //@synthesize sequence=_sequence - In the implementation block
@property (readonly) SCD_Struct_SP1* mapHandle;              //@synthesize mapHandle=_mapHandle - In the implementation block
-(id)init;
-(NSUUID *)beaconIdentifier;
-(SCD_Struct_SP1*)mapHandle;
-(unsigned char)sequence;
-(id)headerString;
-(id)initWithBeaconIdentifier:(id)arg1 keySequence:(unsigned char)arg2 mapHandle:(SCD_Struct_SP1*)arg3 ;
-(void)dealloc;
@end

