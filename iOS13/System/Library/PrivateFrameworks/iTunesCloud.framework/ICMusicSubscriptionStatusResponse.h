/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(ICMusicSubscriptionStatus *)subscriptionStatus;
-(void)setSubscriptionStatus:(ICMusicSubscriptionStatus *)arg1 ;
-(BOOL)needsReload;
-(void)setNeedsReload:(BOOL)arg1 ;
-(NSDictionary *)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(BOOL)isFinalResponse;
-(void)setFinalResponse:(BOOL)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
@end

