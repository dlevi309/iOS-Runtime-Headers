/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString;

@interface TMOAuth : NSObject {

	NSString* _baseString;
	NSString* _headerString;

}

@property (nonatomic,readonly) NSString * baseString;                //@synthesize baseString=_baseString - In the implementation block
@property (nonatomic,readonly) NSString * headerString;              //@synthesize headerString=_headerString - In the implementation block
+(id)headerForURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8 ;
-(NSString *)baseString;
-(NSString *)headerString;
-(id)initWithURL:(id)arg1 method:(id)arg2 postParameters:(id)arg3 nonce:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 token:(id)arg7 tokenSecret:(id)arg8 ;
@end

