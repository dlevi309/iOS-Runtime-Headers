/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol MTAgentDiagnosticDelegate;
@class NSString;

@interface MTAgentDiagnosticListener : NSObject <MTAgentNotificationListener> {

	id<MTAgentDiagnosticDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTAgentDiagnosticDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(id<MTAgentDiagnosticDelegate>)delegate;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<MTAgentDiagnosticDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_addStateHandler;
@end

