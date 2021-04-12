/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryBLEPairing.framework/AccessoryBLEPairing
*/


@class NSString, NSDictionary;

@interface ACCBLEPairingAccessory : NSObject {

	BOOL _desiredBLEPairingState;
	NSString* _accessoryUID;
	NSDictionary* _accInfo;

}

@property (nonatomic,retain) NSString * accessoryUID;                  //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (assign,nonatomic) BOOL desiredBLEPairingState;              //@synthesize desiredBLEPairingState=_desiredBLEPairingState - In the implementation block
@property (nonatomic,retain) NSDictionary * accInfo;                   //@synthesize accInfo=_accInfo - In the implementation block
-(NSString *)accessoryUID;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(id)initWithAccessoryUID:(id)arg1 andAccInfo:(id)arg2 ;
-(BOOL)desiredBLEPairingState;
-(void)setDesiredBLEPairingState:(BOOL)arg1 ;
-(NSDictionary *)accInfo;
-(void)setAccInfo:(NSDictionary *)arg1 ;
@end

