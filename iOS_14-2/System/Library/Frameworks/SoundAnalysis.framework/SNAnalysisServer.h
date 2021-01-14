/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, SNSystemServiceResourceCoordinator, NSString;

@interface SNAnalysisServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	SNSystemServiceResourceCoordinator* _coordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)launchAsMachServiceWithName:(id)arg1 ;
+(id)launchWithResourceCoordinator:(id)arg1 onXPCListener:(id)arg2 ;
+(id)launchDefaultServer;
-(id)init;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithResourceCoordinator:(id)arg1 onListener:(id)arg2 ;
-(id)connectLocally;
@end

