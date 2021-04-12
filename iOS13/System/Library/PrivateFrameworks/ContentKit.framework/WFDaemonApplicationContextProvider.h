/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/WFApplicationContextProvider.h>

@class NSString;

@interface WFDaemonApplicationContextProvider : NSObject <WFApplicationContextProvider> {

	NSString* _userInterfaceType;

}

@property (nonatomic,readonly) NSString * userInterfaceType;              //@synthesize userInterfaceType=_userInterfaceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL wfIdleTimerDisabled; 
-(id)init;
-(BOOL)shouldReverseLayoutDirection;
-(long long)currentApplicationStateForWFApplicationContext:(id)arg1 ;
-(id)bundleForWFApplicationContext:(id)arg1 ;
-(id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1 ;
-(id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2 ;
-(id)keyWindowForWFApplicationContext:(id)arg1 ;
-(id)applicationForWFApplicationContext:(id)arg1 ;
-(id)initWithUserInterfaceType:(id)arg1 ;
-(NSString *)userInterfaceType;
@end

