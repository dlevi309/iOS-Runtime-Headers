/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@class FPDExtension;

@interface FPDAccessRight : NSObject {

	unsigned long long _accessLevel;
	FPDExtension* _provider;

}

@property (nonatomic,readonly) unsigned long long level; 
@property (nonatomic,__weak,readonly) FPDExtension * provider;              //@synthesize provider=_provider - In the implementation block
-(id)init;
-(FPDExtension *)provider;
-(unsigned long long)level;
-(void)_computeAccessForURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3 ;
-(id)initWithURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3 manager:(id)arg4 ;
-(id)initWithURL:(id)arg1 connection:(id)arg2 manager:(id)arg3 ;
@end

