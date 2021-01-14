/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VSJSSubscription.h>
@class NSString, NSDate, NSArray;


@protocol VSJSSubscription <JSExport>
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) long long accessLevel; 
@property (nonatomic,copy) NSArray * tierIdentifiers; 
@property (nonatomic,copy) NSString * billingIdentifier; 
@required
-(void)setExpirationDate:(id)arg1;
-(id)init;
-(void)setBundleId:(id)arg1;
-(NSString *)bundleId;
-(long long)accessLevel;
-(NSDate *)expirationDate;
-(void)setAccessLevel:(long long)arg1;
-(void)setTierIdentifiers:(id)arg1;
-(void)setBillingIdentifier:(id)arg1;
-(NSString *)billingIdentifier;
-(NSArray *)tierIdentifiers;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSArray;

@interface VSJSSubscription : IKJSObject <VSJSSubscription, NSCopying> {

	NSString* _bundleId;
	NSDate* _expirationDate;
	long long _accessLevel;
	NSArray* _tierIdentifiers;
	NSString* _billingIdentifier;

}

@property (nonatomic,copy) NSString * bundleId;                       //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) long long accessLevel;                   //@synthesize accessLevel=_accessLevel - In the implementation block
@property (nonatomic,copy) NSArray * tierIdentifiers;                 //@synthesize tierIdentifiers=_tierIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * billingIdentifier;              //@synthesize billingIdentifier=_billingIdentifier - In the implementation block
+(id)toVSSubscriptions:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)init;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(long long)accessLevel;
-(NSDate *)expirationDate;
-(void)setAccessLevel:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTierIdentifiers:(NSArray *)arg1 ;
-(void)setBillingIdentifier:(NSString *)arg1 ;
-(NSString *)billingIdentifier;
-(NSArray *)tierIdentifiers;
-(id)toVSSubscription;
@end

