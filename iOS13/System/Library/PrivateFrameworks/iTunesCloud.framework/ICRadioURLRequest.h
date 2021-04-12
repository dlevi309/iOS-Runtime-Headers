/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSNumber;

@interface ICRadioURLRequest : ICStoreURLRequest {

	BOOL _backgroundRadioRequest;
	NSNumber* _privateListeningEnabled;
	NSNumber* _delegatedPrivateListeningEnabled;
	long long _protocolVersion;
	/*^block*/id _radioContentDictionaryCreationBlock;

}

@property (assign,getter=isBackgroundRadioRequest,nonatomic) BOOL backgroundRadioRequest;                                      //@synthesize backgroundRadioRequest=_backgroundRadioRequest - In the implementation block
@property (getter=isPrivateListeningEnabled,nonatomic,copy) NSNumber * privateListeningEnabled;                                //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (getter=isDelegatedPrivateListeningEnabled,nonatomic,copy) NSNumber * delegatedPrivateListeningEnabled;              //@synthesize delegatedPrivateListeningEnabled=_delegatedPrivateListeningEnabled - In the implementation block
@property (assign,nonatomic) long long protocolVersion;                                                                        //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) id radioContentDictionaryCreationBlock;                                                             //@synthesize radioContentDictionaryCreationBlock=_radioContentDictionaryCreationBlock - In the implementation block
-(long long)protocolVersion;
-(void)setProtocolVersion:(long long)arg1 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 ;
-(id)isPrivateListeningEnabled;
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(void)setRadioContentDictionaryCreationBlock:(id)arg1 ;
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDelegatedPrivateListeningEnabled:(NSNumber *)arg1 ;
-(id)isDelegatedPrivateListeningEnabled;
-(BOOL)isBackgroundRadioRequest;
-(void)_decorateHeaderPropertiesForURLRequest:(id)arg1 withBuilderProperties:(id)arg2 ;
-(id)radioContentDictionaryCreationBlock;
-(void)setBackgroundRadioRequest:(BOOL)arg1 ;
@end

