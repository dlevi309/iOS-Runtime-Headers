/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <AXSpringBoardServerInstance/AXViewServiceHandler.h>

@class NSMutableDictionary, NSString;

@interface AXSpringBoardServerAlertManager : NSObject <SBSRemoteAlertHandleObserver, AXViewServiceHandler> {

	NSMutableDictionary* _handlesByService;

}

@property (nonatomic,retain) NSMutableDictionary * handlesByService;              //@synthesize handlesByService=_handlesByService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)showAXUIViewService:(id)arg1 withData:(id)arg2 ;
-(void)hideAXUIViewService:(id)arg1 ;
-(BOOL)isShowingAXUIViewService:(id)arg1 ;
-(NSMutableDictionary *)handlesByService;
-(void)setHandlesByService:(NSMutableDictionary *)arg1 ;
@end

