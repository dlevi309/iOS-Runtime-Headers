/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SXStoreFrontProvider.h>

@protocol FCAppleAccount;
@class NSString;

@interface NUStoreFrontProvider : NSObject <SXStoreFrontProvider> {

	id<FCAppleAccount> _appleAccount;

}

@property (nonatomic,readonly) id<FCAppleAccount> appleAccount;              //@synthesize appleAccount=_appleAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * storeFrontIdentifier; 
-(NSString *)storeFrontIdentifier;
-(id)initWithAppleAccount:(id)arg1 ;
-(id<FCAppleAccount>)appleAccount;
@end

