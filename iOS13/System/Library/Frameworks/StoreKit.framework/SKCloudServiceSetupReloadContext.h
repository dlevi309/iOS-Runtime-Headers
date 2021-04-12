/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSArray *)queryItems;
-(void)setQueryItems:(NSArray *)arg1 ;
-(NSURL *)referrerURL;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSURL *)cloudServiceSetupURL;
-(void)setCloudServiceSetupURL:(NSURL *)arg1 ;
-(NSString *)serializedUserInfo;
@end

