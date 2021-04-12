/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SXStoreFrontProvider.h>

@protocol FCAppleAccount;
@class NSString;

@interface NUStoreFrontProvider : NSObject <SXStoreFrontProvider> {

	id<FCAppleAccount> _appleAccount;

}

@property (nonatomic,readonly) id<FCAppleAccount> appleAccount;              //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,readonly) NSString * storeFrontIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)storeFrontIdentifier;
-(id<FCAppleAccount>)appleAccount;
-(id)initWithAppleAccount:(id)arg1 ;
@end

