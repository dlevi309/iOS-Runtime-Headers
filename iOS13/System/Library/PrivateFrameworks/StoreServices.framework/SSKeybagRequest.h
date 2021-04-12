/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)accountIdentifier;
-(NSNumber *)accountID;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)setContentIdentifier:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)contentIdentifier;
-(long long)keybagOptions;
-(void)setKeybagOptions:(long long)arg1 ;
@end

