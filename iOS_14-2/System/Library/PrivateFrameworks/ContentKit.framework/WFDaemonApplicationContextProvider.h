/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/WFApplicationContextProvider.h>

@class NSString;

@interface WFDaemonApplicationContextProvider : NSObject <WFApplicationContextProvider> {

	NSString* _userInterfaceType;

}

@property (nonatomic,readonly) NSString * userInterfaceType;              //@synthesize userInterfaceType=_userInterfaceType - In the implementation block
@property (assign,nonatomic) BOOL wfIdleTimerDisabled; 
@property (nonatomic,readonly) long long userInterfaceStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)shouldReverseLayoutDirection;
-(NSString *)userInterfaceType;
-(long long)currentApplicationStateForWFApplicationContext:(id)arg1 ;
-(id)bundleForWFApplicationContext:(id)arg1 ;
-(id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1 ;
-(id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2 ;
-(id)keyWindowForWFApplicationContext:(id)arg1 ;
-(id)applicationForWFApplicationContext:(id)arg1 ;
-(id)initWithUserInterfaceType:(id)arg1 ;
@end

