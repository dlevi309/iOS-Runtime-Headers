/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol TKTokenDelegate;
@class TKTokenConfiguration, TKTokenDriver, TKTokenKeychainContents, TKTokenID;

@interface TKToken : NSObject {

	TKTokenConfiguration* _configuration;
	TKTokenDriver* _tokenDriver;
	id<TKTokenDelegate> _delegate;
	TKTokenKeychainContents* _keychainContents;
	TKTokenID* _tokenID;

}

@property (retain) TKTokenKeychainContents * keychainContents;              //@synthesize keychainContents=_keychainContents - In the implementation block
@property (readonly) TKTokenID * tokenID;                                   //@synthesize tokenID=_tokenID - In the implementation block
@property (readonly) TKTokenDriver * tokenDriver;                           //@synthesize tokenDriver=_tokenDriver - In the implementation block
@property (__weak) id<TKTokenDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) TKTokenConfiguration * configuration; 
-(TKTokenID *)tokenID;
-(id<TKTokenDelegate>)delegate;
-(void)terminate;
-(void)setDelegate:(id<TKTokenDelegate>)arg1 ;
-(id)description;
-(TKTokenConfiguration *)configuration;
-(TKTokenDriver *)tokenDriver;
-(id)initWithTokenDriver:(id)arg1 instanceID:(id)arg2 ;
-(TKTokenKeychainContents *)keychainContents;
-(void)setKeychainContents:(TKTokenKeychainContents *)arg1 ;
@end

