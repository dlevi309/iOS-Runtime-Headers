/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isNotEmpty;
-(id)copyShortDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyEncodedXPCDict;
-(id)copyLongDescription;
-(void)setPacketsPerSecond:(NSNumber *)arg1 ;
-(void)setOutputBytesPerSecond:(NSNumber *)arg1 ;
-(void)setInputBytesPerSecond:(NSNumber *)arg1 ;
-(NSNumber *)inputBytesPerSecond;
-(NSNumber *)outputBytesPerSecond;
-(NSNumber *)packetsPerSecond;
@end

