/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSArray, TKTokenConfiguration, NSString, NSDictionary;

@interface TKTokenKeychainContents : NSObject {

	NSArray* _items;
	TKTokenConfiguration* _configuration;
	NSString* _tokenID;

}

@property (readonly) TKTokenConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NSString * tokenID;                                //@synthesize tokenID=_tokenID - In the implementation block
@property (copy,readonly) NSDictionary * keys; 
@property (copy,readonly) NSDictionary * certificates; 
@property (copy,readonly) NSArray * items; 
-(NSString *)tokenID;
-(NSDictionary *)keys;
-(NSDictionary *)certificates;
-(NSArray *)items;
-(id)initWithConfiguration:(id)arg1 ;
-(TKTokenConfiguration *)configuration;
-(id)keyForObjectID:(id)arg1 error:(id*)arg2 ;
-(id)initWithTokenID:(id)arg1 ;
-(id)certificateForObjectID:(id)arg1 error:(id*)arg2 ;
-(void)fillWithItems:(id)arg1 ;
-(id)certificateForKey:(id)arg1 ;
@end

