/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSNumber;

@interface SSVInstallManagedApplicationRequest : SSRequest <SSXPCCoding> {

	BOOL _skipDownloads;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _externalVersionIdentifier;
	NSString* _itemIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                          //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;              //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;                         //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) BOOL skipDownloads;                              //@synthesize skipDownloads=_skipDownloads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)itemIdentifier;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(NSNumber *)externalVersionIdentifier;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4 ;
-(void)startWithDetailedResponseBlock:(/*^block*/id)arg1 ;
-(void)startWithMetadataResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4 skipDownloads:(BOOL)arg5 ;
-(BOOL)skipDownloads;
-(void)setSkipDownloads:(BOOL)arg1 ;
-(NSString *)bundleVersion;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

