/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setAccessToken:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)accessToken;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setPageAccessToken:(NSString *)arg1 ;
-(void)setPageIdentifier:(NSString *)arg1 ;
-(NSString *)pageAccessToken;
-(NSString *)pageIdentifier;
@end

