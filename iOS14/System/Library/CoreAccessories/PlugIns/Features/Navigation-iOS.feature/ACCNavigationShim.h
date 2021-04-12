/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Navigation-iOS.feature/Navigation-iOS
*/

#import <libobjc.A.dylib/ACCiAP2ShimServerDelegate.h>

@protocol ACCNavigationShimProtocol;
@class NSString;

@interface ACCNavigationShim : NSObject <ACCiAP2ShimServerDelegate> {

	id<ACCNavigationShimProtocol> _delegate;
	NSString* _uid;

}

@property (readonly) NSString * uid;                                                     //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic,__weak) id<ACCNavigationShimProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)accessoryAttached:(id)arg1 ;
-(NSString *)uid;
-(id<ACCNavigationShimProtocol>)delegate;
-(id)getUID;
-(void)setDelegate:(id<ACCNavigationShimProtocol>)arg1 ;
-(id)description;
-(id)initWithDelegate:(id)arg1 ;
-(void)accessoryDetached:(id)arg1 ;
-(void)dealloc;
-(BOOL)tryProcessXPCMessage:(id)arg1 connection:(id)arg2 server:(id)arg3 ;
-(id)convertIAP2ACCRouteGuidanceInfo:(id)arg1 forAccessory:(id)arg2 ;
-(id)convertIAP2ACCManeuverInfo:(id)arg1 forAccessory:(id)arg2 ;
-(void)accessoryNavigation:(id)arg1 updateRouteGuidanceInfo:(id)arg2 ;
-(void)accessoryNavigation:(id)arg1 updateManeuverInfo:(id)arg2 ;
-(void)accessoryStartRouteGuidance:(id)arg1 componentList:(id)arg2 ;
-(void)accessoryStopRouteGuidance:(id)arg1 componentList:(id)arg2 ;
@end

