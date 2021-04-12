/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol MRCryptoPairingSessionDelegate;
#import <MediaRemote/MediaRemote-Structs.h>
@class _MRDeviceInfoMessageProtobuf, NSArray;

@interface MRCryptoPairingSession : NSObject {

	_MRDeviceInfoMessageProtobuf* _device;
	unsigned long long _role;
	id<MRCryptoPairingSessionDelegate> _delegate;

}

@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * device;                         //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                                       //@synthesize role=_role - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (nonatomic,readonly) NSArray * pairedDevices; 
@property (assign,nonatomic,__weak) id<MRCryptoPairingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isValid;
-(void)open;
-(void)close;
-(id<MRCryptoPairingSessionDelegate>)delegate;
-(void)setDelegate:(id<MRCryptoPairingSessionDelegate>)arg1 ;
-(unsigned long long)role;
-(_MRDeviceInfoMessageProtobuf *)device;
-(BOOL)isPaired;
-(NSArray *)pairedDevices;
-(id)initWithRole:(unsigned long long)arg1 device:(id)arg2 ;
-(id)removePeer;
-(id)updatePeer;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
@end

