/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSData, NSUUID, NSString, NSURL;

@interface ASDClipRequest : NSObject <NSSecureCoding> {

	BOOL _prefetchDecryption;
	BOOL _thirdPartyWithNoAppReferrer;
	NSDictionary* _dictionary;
	NSData* _placeholderArtwork;
	NSUUID* _uniqueID;
	NSString* _installSourceBundleID;
	NSString* _referrerType;
	NSURL* _sourceURL;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                   //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSData * placeholderArtwork;                   //@synthesize placeholderArtwork=_placeholderArtwork - In the implementation block
@property (assign,nonatomic) BOOL prefetchDecryption;                       //@synthesize prefetchDecryption=_prefetchDecryption - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueID;                           //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSString * installSourceBundleID;              //@synthesize installSourceBundleID=_installSourceBundleID - In the implementation block
@property (nonatomic,retain) NSString * referrerType;                       //@synthesize referrerType=_referrerType - In the implementation block
@property (assign,nonatomic) BOOL thirdPartyWithNoAppReferrer;              //@synthesize thirdPartyWithNoAppReferrer=_thirdPartyWithNoAppReferrer - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                             //@synthesize sourceURL=_sourceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSUUID *)uniqueID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)referrerType;
-(NSData *)placeholderArtwork;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPlaceholderArtwork:(NSData *)arg1 ;
-(BOOL)prefetchDecryption;
-(void)setPrefetchDecryption:(BOOL)arg1 ;
-(NSString *)installSourceBundleID;
-(void)setInstallSourceBundleID:(NSString *)arg1 ;
-(void)setReferrerType:(NSString *)arg1 ;
-(BOOL)thirdPartyWithNoAppReferrer;
-(void)setThirdPartyWithNoAppReferrer:(BOOL)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithCoder:(id)arg1 ;
@end

