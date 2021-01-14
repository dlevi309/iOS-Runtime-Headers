/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, NSDate, PKCurrencyAmount;

@interface PKAccountServicingEvent : NSObject <NSSecureCoding, PKRecordObject> {

	NSString* _identifier;
	unsigned long long _status;
	unsigned long long _activityType;
	NSString* _activityIdentifier;
	NSDate* _openDate;
	NSDate* _lastUpdatedDate;
	PKCurrencyAmount* _amount;
	NSString* _reasonCode;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long status;                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSString * activityIdentifier;                  //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * openDate;                              //@synthesize openDate=_openDate - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdatedDate;                       //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * amount;                      //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * reasonCode;                          //@synthesize reasonCode=_reasonCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(void)setActivityType:(unsigned long long)arg1 ;
-(unsigned long long)activityType;
-(void)encodeWithRecord:(id)arg1 ;
-(NSDate *)lastUpdatedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(NSString *)reasonCode;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(void)setActivityIdentifier:(NSString *)arg1 ;
-(NSDate *)openDate;
-(NSString *)activityIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKCurrencyAmount *)amount;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setReasonCode:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setOpenDate:(NSDate *)arg1 ;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)status;
@end

