/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id<ACCNavigationShimProtocol>)delegate;
-(void)setDelegate:(id<ACCNavigationShimProtocol>)arg1 ;
-(NSString *)uid;
-(id)initWithDelegate:(id)arg1 ;
-(id)getUID;
-(BOOL)tryProcessXPCMessage:(id)arg1 connection:(id)arg2 server:(id)arg3 ;
-(id)convertIAP2ACCRouteGuidanceInfo:(id)arg1 forAccessory:(id)arg2 ;
-(id)convertIAP2ACCManeuverInfo:(id)arg1 forAccessory:(id)arg2 ;
-(void)accessoryNavigation:(id)arg1 updateRouteGuidanceInfo:(id)arg2 ;
-(void)accessoryNavigation:(id)arg1 updateManeuverInfo:(id)arg2 ;
-(void)accessoryAttached:(id)arg1 ;
-(void)accessoryDetached:(id)arg1 ;
-(void)accessoryStartRouteGuidance:(id)arg1 componentList:(id)arg2 ;
-(void)accessoryStopRouteGuidance:(id)arg1 componentList:(id)arg2 ;
@end

