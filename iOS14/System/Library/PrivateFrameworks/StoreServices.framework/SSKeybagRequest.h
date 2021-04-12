/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSKeybagRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;
	id _contentIdentifier;
	long long _options;

}

@property (readonly) NSNumber * accountID;                          //@synthesize accountID=_accountID - In the implementation block
@property (copy) id contentIdentifier;                              //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (assign) long long keybagOptions;                         //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)accountID;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)accountIdentifier;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)contentIdentifier;
-(long long)keybagOptions;
-(void)setKeybagOptions:(long long)arg1 ;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)setContentIdentifier:(id)arg1 ;
-(void)dealloc;
@end

