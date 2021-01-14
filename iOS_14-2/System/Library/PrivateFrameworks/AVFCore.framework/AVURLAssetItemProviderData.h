/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSecurityScopedURLWrapper, NSDictionary, NSURL;

@interface AVURLAssetItemProviderData : NSObject <NSSecureCoding> {

	NSSecurityScopedURLWrapper* _securityScopedURLWrapper;
	NSDictionary* _assetInitializationOptions;

}

@property (nonatomic,readonly) NSURL * securityScopedURL; 
@property (nonatomic,readonly) NSDictionary * assetInitializationOptions;              //@synthesize assetInitializationOptions=_assetInitializationOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)itemProviderDataWithURL:(id)arg1 assetInitializationOptions:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)securityScopedURL;
-(id)initWithURL:(id)arg1 assetInitializationOptions:(id)arg2 ;
-(NSDictionary *)assetInitializationOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

