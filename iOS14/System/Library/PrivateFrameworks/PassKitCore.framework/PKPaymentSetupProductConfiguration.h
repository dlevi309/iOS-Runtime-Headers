/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface PKPaymentSetupProductConfiguration : NSObject <NSCopying> {

	NSString* _partnerIdentifier;
	NSString* _productIdentifier;
	unsigned long long _type;
	NSString* _dirtyStateIdentifier;
	NSDate* _lastUpdated;
	unsigned long long _state;
	NSString* _notificationTitle;
	NSString* _notificationMessage;
	unsigned long long _featureIdentifier;

}

@property (nonatomic,copy) NSString * partnerIdentifier;                        //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                        //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * dirtyStateIdentifier;                     //@synthesize dirtyStateIdentifier=_dirtyStateIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                              //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * notificationTitle;                        //@synthesize notificationTitle=_notificationTitle - In the implementation block
@property (nonatomic,copy) NSString * notificationMessage;                      //@synthesize notificationMessage=_notificationMessage - In the implementation block
-(NSDate *)lastUpdated;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)productIdentifier;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSString *)partnerIdentifier;
-(unsigned long long)featureIdentifier;
-(unsigned long long)type;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)initWithProductDictionary:(id)arg1 ;
-(NSString *)dirtyStateIdentifier;
-(void)setDirtyStateIdentifier:(NSString *)arg1 ;
-(NSString *)notificationTitle;
-(void)setNotificationTitle:(NSString *)arg1 ;
-(NSString *)notificationMessage;
-(void)setNotificationMessage:(NSString *)arg1 ;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

