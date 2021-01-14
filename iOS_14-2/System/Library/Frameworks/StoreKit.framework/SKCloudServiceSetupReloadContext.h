/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSURL, NSString, NSArray;

@interface SKCloudServiceSetupReloadContext : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _userInfo;
	NSURL* _cloudServiceSetupURL;
	NSString* _action;
	NSArray* _queryItems;
	NSString* _sourceApplicationBundleIdentifier;
	NSURL* _referrerURL;
	NSString* _serializedUserInfo;

}

@property (nonatomic,copy,readonly) NSString * serializedUserInfo;                    //@synthesize serializedUserInfo=_serializedUserInfo - In the implementation block
@property (nonatomic,retain) NSURL * cloudServiceSetupURL;                            //@synthesize cloudServiceSetupURL=_cloudServiceSetupURL - In the implementation block
@property (nonatomic,copy) NSString * action;                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSArray * queryItems;                                      //@synthesize queryItems=_queryItems - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * referrerURL;                                     //@synthesize referrerURL=_referrerURL - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSArray *)queryItems;
-(NSDictionary *)userInfo;
-(void)setQueryItems:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)referrerURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)cloudServiceSetupURL;
-(void)setCloudServiceSetupURL:(NSURL *)arg1 ;
-(NSString *)serializedUserInfo;
@end

