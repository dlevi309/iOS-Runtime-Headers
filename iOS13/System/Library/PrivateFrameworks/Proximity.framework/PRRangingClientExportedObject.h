/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <libobjc.A.dylib/PRRangingClientProtocol.h>
#import <libobjc.A.dylib/PRAidedRangingClientProtocol.h>

@protocol PRRangingClientProtocol;
@class NSString;

@interface PRRangingClientExportedObject : NSObject <PRRangingClientProtocol, PRAidedRangingClientProtocol> {

	id<PRRangingClientProtocol> _rangingClient;

}

@property (assign,nonatomic,__weak) id<PRRangingClientProtocol> rangingClient;              //@synthesize rangingClient=_rangingClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFailWithError:(id)arg1 ;
-(id)initWithRangingClient:(id)arg1 ;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 ;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2 ;
-(void)sendDataToPeers:(id)arg1 ;
-(id<PRRangingClientProtocol>)rangingClient;
-(void)setRangingClient:(id<PRRangingClientProtocol>)arg1 ;
@end

