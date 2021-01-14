/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRTransportExternalDevice.h>
#import <libobjc.A.dylib/MRProtocolClientConnectionDelegate.h>

@class NSString;

@interface MRJSONTransportExternalDevice : MRTransportExternalDevice <MRProtocolClientConnectionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPaired;
-(id)_onWorkerQueue_createClientConnectionWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)_handleSetStateMessage:(id)arg1 ;
@end

