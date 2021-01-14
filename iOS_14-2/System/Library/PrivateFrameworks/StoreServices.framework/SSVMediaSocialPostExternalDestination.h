/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVMediaSocialPostExternalDestination : NSObject <NSCopying, SSXPCCoding> {

	NSString* _accessToken;
	NSString* _pageAccessToken;
	NSString* _pageIdentifier;
	NSString* _serviceIdentifier;

}

@property (nonatomic,copy) NSString * pageAccessToken;                //@synthesize pageAccessToken=_pageAccessToken - In the implementation block
@property (nonatomic,copy) NSString * pageIdentifier;                 //@synthesize pageIdentifier=_pageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                    //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)accessToken;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setPageAccessToken:(NSString *)arg1 ;
-(void)setPageIdentifier:(NSString *)arg1 ;
-(NSString *)pageAccessToken;
-(NSString *)pageIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccessToken:(NSString *)arg1 ;
@end

