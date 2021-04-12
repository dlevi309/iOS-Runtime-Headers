/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolClientConnection.h>

@class NSMutableDictionary;

@interface MRIDSClientConnection : MRProtocolClientConnection {

	NSMutableDictionary* _discoveryModesForFeatures;

}
-(id)decryptData:(id)arg1 error:(id*)arg2 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3 ;
-(void)clearDiscoveryModes;
-(void)setDiscoveryMode:(unsigned)arg1 forFeature:(unsigned)arg2 ;
-(unsigned)discoveryModeForFeature:(unsigned)arg1 ;
-(id)encryptDataForMessage:(id)arg1 ;
@end

