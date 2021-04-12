/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSAppleAccountInformationProviding.h>

@class NSString;

@interface WBSAppleAccountInformationProvider : NSObject <WBSAppleAccountInformationProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)appleAccountSecurityState;
-(unsigned long long)_primaryAppleAccountSecurityLevel;
-(void)getAppleAccountSecurityStateWithCompletion:(/*^block*/id)arg1 ;
@end

