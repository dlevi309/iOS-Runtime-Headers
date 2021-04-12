/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)connect;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<WBSCyclerTestTarget>)testTarget;
-(id)initWithTestTarget:(id)arg1 ;
@end

