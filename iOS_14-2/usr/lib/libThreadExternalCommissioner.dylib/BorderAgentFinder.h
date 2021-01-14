/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libThreadExternalCommissioner.dylib
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol BorderAgentListener;
@class NSNetServiceBrowser, NSMutableArray, NSString;

@interface BorderAgentFinder : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSNetServiceBrowser* _browser;
	NSMutableArray* _borderAgents;
	id<BorderAgentListener> _delegate;

}

@property (__weak) id<BorderAgentListener> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<BorderAgentListener>)delegate;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)start;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)stop;
-(void)setDelegate:(id<BorderAgentListener>)arg1 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(unsigned long long)getNumberOfBorderAgents;
-(id)getBorderAgentAtIndex:(unsigned long long)arg1 ;
-(id)getAgentDescription:(unsigned long long)arg1 ;
@end

