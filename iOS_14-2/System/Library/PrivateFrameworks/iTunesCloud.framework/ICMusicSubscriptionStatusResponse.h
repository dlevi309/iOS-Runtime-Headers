/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICMusicSubscriptionStatus, NSDate, NSDictionary;

@interface ICMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding> {

	BOOL _finalResponse;
	BOOL _needsReload;
	ICMusicSubscriptionStatus* _subscriptionStatus;
	NSDate* _expirationDate;

}

@property (assign,getter=isFinalResponse,nonatomic) BOOL finalResponse;                     //@synthesize finalResponse=_finalResponse - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                                              //@synthesize needsReload=_needsReload - In the implementation block
@property (nonatomic,copy) ICMusicSubscriptionStatus * subscriptionStatus;                  //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyListRepresentation; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidSubscriptionStatusPropertyListRepresentation:(id)arg1 error:(id*)arg2 ;
+(BOOL)isValidSubscriptionStatusResponseDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(NSDictionary *)propertyListRepresentation;
-(BOOL)isFinalResponse;
-(void)setNeedsReload:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(BOOL)needsReload;
-(id)description;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubscriptionStatus:(ICMusicSubscriptionStatus *)arg1 ;
-(void)setFinalResponse:(BOOL)arg1 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICMusicSubscriptionStatus *)subscriptionStatus;
@end

