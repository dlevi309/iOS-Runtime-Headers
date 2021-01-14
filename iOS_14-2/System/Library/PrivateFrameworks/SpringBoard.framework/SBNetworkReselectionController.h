/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_test;
-(id)init;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)_handleNetworkReselectionNeeded:(BOOL)arg1 forSlot:(long long)arg2 ;
-(void)dealloc;
@end

