/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)accountDescription;
-(NSString *)DSID;
-(NSString *)username;
-(NSString *)identifier;

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
-(NSString *)accountDescription;
-(NSString *)DSID;
-(NSString *)username;
-(NSString *)identifier;
-(id)initWithACAccount:(id)arg1 ;
-(ACAccount *)nativeAccount;
@end

