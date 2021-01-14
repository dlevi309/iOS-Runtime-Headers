/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/ASDIAPInfo.h>

@class NSNumber, NSDate, NSString;

@interface ASDMutableIAPInfo : ASDIAPInfo

@property (nonatomic,retain) NSNumber * adamId; 
@property (nonatomic,retain) NSNumber * appAdamId; 
@property (assign,nonatomic) BOOL autoRenewStatus; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
@property (nonatomic,retain) NSDate * purchaseDate; 
@property (assign,nonatomic) unsigned char type; 
@property (assign,nonatomic) BOOL hasUsedFreeOffer; 
@property (assign,nonatomic) BOOL hasUsedIntroPricingOffer; 
@property (nonatomic,retain) NSString * subscriptionFamilyId; 
@property (nonatomic,retain) NSNumber * expirationTimestamp; 
@property (nonatomic,retain) NSNumber * lastModifiedTimestamp; 
@property (nonatomic,retain) NSNumber * purchaseTimestamp; 
-(void)setLastModifiedTimestamp:(NSNumber *)arg1 ;
-(void)setPurchaseTimestamp:(NSNumber *)arg1 ;
-(void)setExpirationTimestamp:(NSNumber *)arg1 ;
@end

