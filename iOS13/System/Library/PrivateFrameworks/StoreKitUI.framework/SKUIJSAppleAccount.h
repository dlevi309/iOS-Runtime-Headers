/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIJSAppleAccount.h>
@class NSString;


@protocol SKUIJSAppleAccount <JSExport>
@property (nonatomic,readonly) NSString * accountDescription; 
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * username; 
@required
-(NSString *)identifier;
-(NSString *)username;
-(NSString *)accountDescription;
-(NSString *)DSID;

@end


@class NSString, ACAccount;

@interface SKUIJSAppleAccount : NSObject <SKUIJSAppleAccount> {

	ACAccount* _account;
	ACAccount* _nativeAccount;

}

@property (readonly) ACAccount * nativeAccount;                            //@synthesize nativeAccount=_nativeAccount - In the implementation block
@property (nonatomic,readonly) NSString * accountDescription; 
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * username; 
-(NSString *)identifier;
-(NSString *)username;
-(NSString *)accountDescription;
-(NSString *)DSID;
-(id)initWithACAccount:(id)arg1 ;
-(ACAccount *)nativeAccount;
@end

