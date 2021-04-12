/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)status;
-(unsigned long long)activityType;
-(PKCurrencyAmount *)amount;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setActivityType:(unsigned long long)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSDate *)lastUpdatedDate;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSString *)activityIdentifier;
-(void)setActivityIdentifier:(NSString *)arg1 ;
-(NSDate *)openDate;
-(void)setOpenDate:(NSDate *)arg1 ;
-(NSString *)reasonCode;
-(void)setReasonCode:(NSString *)arg1 ;
@end

