/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <GeoServices/GEONavdPeer.h>

@class NSString, GEOApplicationAuditToken;

@interface MNNavigationServicePeer : GEONavdPeer {

	NSString* _peerIdentifier;
	int _processIdentifier;
	GEOApplicationAuditToken* _auditToken;

}

@property (nonatomic,readonly) NSString * peerIdentifier;                          //@synthesize peerIdentifier=_peerIdentifier - In the implementation block
@property (nonatomic,readonly) int processIdentifier;                              //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
+(const char*)logCategory;
+(id)peerForConnection:(id)arg1 ;
-(void)dealloc;
-(int)processIdentifier;
-(GEOApplicationAuditToken *)auditToken;
-(NSString *)peerIdentifier;
-(const char*)logCategory;
-(id)initWithConnection:(id)arg1 peerIdentifier:(id)arg2 processIdentifier:(int)arg3 ;
-(void)clearConnectionHandlers;
@end

