/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned char)sequence;
-(id)headerString;
-(NSUUID *)beaconIdentifier;
-(id)initWithBeaconIdentifier:(id)arg1 keySequence:(unsigned char)arg2 mapHandle:(SCD_Struct_SP1*)arg3 ;
-(SCD_Struct_SP1*)mapHandle;
@end

