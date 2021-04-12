/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSString, NSMutableDictionary;

@interface IDSCommnatManager : NSObject {

	NSString* _cbuuid;
	NSString* _deviceUniqueID;
	/*^block*/id _completionBlock;
	/*^block*/id _linkBlock;
	sockaddr_storage _commnatServer;
	NSMutableDictionary* _nonceToRequest;
	NSMutableDictionary* _nonceToCandidates;

}
-(void)dealloc;
-(void)invalidate;
-(void)_getCommNATServerAddress;
-(void)sendCommnatRequest:(id)arg1 candidate:(id)arg2 ;
-(BOOL)isCommnatDiscoveryDone;
-(id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 linkBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)startCommnatDiscoveryForHostCandidates:(id)arg1 ;
-(void)processCommnatResponse:(SCD_Struct_ID19*)arg1 arrivalTime:(double)arg2 ;
@end

