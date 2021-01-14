/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/

#import <libobjc.A.dylib/RBSServiceDelegate.h>

@class NSString;

@interface BKSWorkspace : NSObject <RBSServiceDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)service:(id)arg1 didLoseInheritances:(id)arg2 ;
-(void)service:(id)arg1 didReceiveInheritances:(id)arg2 ;
@end

