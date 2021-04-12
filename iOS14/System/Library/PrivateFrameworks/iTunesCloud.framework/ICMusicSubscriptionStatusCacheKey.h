/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying> {

	NSNumber* _DSID;
	NSString* _phoneNumber;
	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy) NSNumber * DSID;                              //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                       //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(NSNumber *)DSID;
-(id)initWithStringRepresentation:(id)arg1 ;
-(id)stringRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 requiringDSID:(BOOL)arg2 ;
-(id)init;
-(NSString *)storefrontIdentifier;
-(NSString *)phoneNumber;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(id)description;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentationIncludingDSID:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

