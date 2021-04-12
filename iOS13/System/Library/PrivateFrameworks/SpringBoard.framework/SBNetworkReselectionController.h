/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/STTelephonyStateObserver.h>

@class NSString;

@interface SBNetworkReselectionController : NSObject <STTelephonyStateObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(void)_test;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)_handleNetworkReselectionNeeded:(BOOL)arg1 forSlot:(long long)arg2 ;
@end

