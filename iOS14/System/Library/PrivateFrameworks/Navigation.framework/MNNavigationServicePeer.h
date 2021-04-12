/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <GeoServices/GEONavdPeer.h>

@class NSString;

@interface MNNavigationServicePeer : GEONavdPeer {

	NSString* _peerIdentifier;
	int _processIdentifier;

}

@property (nonatomic,readonly) NSString * peerIdentifier;              //@synthesize peerIdentifier=_peerIdentifier - In the implementation block
@property (nonatomic,readonly) int processIdentifier;                  //@synthesize processIdentifier=_processIdentifier - In the implementation block
+(const char*)logCategory;
+(id)peerForConnection:(id)arg1 ;
-(const char*)logCategory;
-(int)processIdentifier;
-(NSString *)peerIdentifier;
-(id)auditToken;
-(void)clearConnectionHandlers;
-(id)initWithConnection:(id)arg1 peerIdentifier:(id)arg2 processIdentifier:(int)arg3 ;
-(void)dealloc;
@end

