/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
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
-(void)setHandlesByService:(NSMutableDictionary *)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)hideAXUIViewService:(id)arg1 ;
-(void)showAXUIViewService:(id)arg1 withData:(id)arg2 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(NSMutableDictionary *)handlesByService;
-(BOOL)isShowingAXUIViewService:(id)arg1 ;
@end

