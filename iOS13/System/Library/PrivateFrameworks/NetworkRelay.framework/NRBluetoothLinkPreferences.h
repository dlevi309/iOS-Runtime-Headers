/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <NetworkRelay/NRLinkPreferences.h>

@class NSNumber;

@interface NRBluetoothLinkPreferences : NRLinkPreferences {

	NSNumber* _inputBytesPerSecond;
	NSNumber* _outputBytesPerSecond;
	NSNumber* _packetsPerSecond;

}

@property (nonatomic,retain) NSNumber * inputBytesPerSecond;               //@synthesize inputBytesPerSecond=_inputBytesPerSecond - In the implementation block
@property (nonatomic,retain) NSNumber * outputBytesPerSecond;              //@synthesize outputBytesPerSecond=_outputBytesPerSecond - In the implementation block
@property (nonatomic,retain) NSNumber * packetsPerSecond;                  //@synthesize packetsPerSecond=_packetsPerSecond - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isNotEmpty;
-(id)copyShortDescription;
-(id)copyEncodedXPCDict;
-(id)copyLongDescription;
-(void)setPacketsPerSecond:(NSNumber *)arg1 ;
-(void)setOutputBytesPerSecond:(NSNumber *)arg1 ;
-(void)setInputBytesPerSecond:(NSNumber *)arg1 ;
-(NSNumber *)inputBytesPerSecond;
-(NSNumber *)outputBytesPerSecond;
-(NSNumber *)packetsPerSecond;
@end

