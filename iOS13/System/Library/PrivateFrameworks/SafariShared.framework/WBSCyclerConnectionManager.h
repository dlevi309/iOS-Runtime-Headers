/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol WBSCyclerTestTarget;
@class NSXPCListener, WBSCyclerServiceProxy, NSString;

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _xpcListener;
	WBSCyclerServiceProxy* _cyclerProxy;
	id<WBSCyclerTestTarget> _testTarget;

}

@property (nonatomic,readonly) id<WBSCyclerTestTarget> testTarget;              //@synthesize testTarget=_testTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isCyclerEnabled;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)connect;
-(id<WBSCyclerTestTarget>)testTarget;
-(id)initWithTestTarget:(id)arg1 ;
@end

