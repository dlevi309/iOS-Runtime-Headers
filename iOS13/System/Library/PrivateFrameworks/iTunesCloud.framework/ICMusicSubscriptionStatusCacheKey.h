/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumber;
-(id)stringRepresentation;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(NSNumber *)DSID;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 requiringDSID:(BOOL)arg2 ;
-(id)dictionaryRepresentationIncludingDSID:(BOOL)arg1 ;
@end

