/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setExpirationTimestamp:(NSNumber *)arg1 ;
-(void)setLastModifiedTimestamp:(NSNumber *)arg1 ;
-(void)setPurchaseTimestamp:(NSNumber *)arg1 ;
@end

