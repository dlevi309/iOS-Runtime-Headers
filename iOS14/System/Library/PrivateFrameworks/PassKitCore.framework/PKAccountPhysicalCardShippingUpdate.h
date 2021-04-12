/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, NSDate, NSDateComponents, NSURL;

@interface PKAccountPhysicalCardShippingUpdate : NSObject <NSSecureCoding, PKRecordObject> {

	NSString* _physicalCardIdentifier;
	long long _shippingStatus;
	NSString* _localizedDeliveryExceptionReason;
	NSString* _trackingNumber;
	NSString* _shippingCompany;
	NSDate* _timestamp;
	NSDateComponents* _estimatedDeliveryDate;

}

@property (nonatomic,copy) NSString * physicalCardIdentifier;                               //@synthesize physicalCardIdentifier=_physicalCardIdentifier - In the implementation block
@property (assign,nonatomic) long long shippingStatus;                                      //@synthesize shippingStatus=_shippingStatus - In the implementation block
@property (nonatomic,copy) NSString * localizedDeliveryExceptionReason;                     //@synthesize localizedDeliveryExceptionReason=_localizedDeliveryExceptionReason - In the implementation block
@property (nonatomic,copy) NSString * trackingNumber;                                       //@synthesize trackingNumber=_trackingNumber - In the implementation block
@property (nonatomic,copy) NSString * shippingCompany;                                      //@synthesize shippingCompany=_shippingCompany - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDateComponents * estimatedDeliveryDate;                      //@synthesize estimatedDeliveryDate=_estimatedDeliveryDate - In the implementation block
@property (nonatomic,readonly) NSURL * shipmentTrackingURL; 
@property (nonatomic,copy,readonly) NSString * formattedEstimatedDeliveryDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(void)encodeWithRecord:(id)arg1 ;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)trackingNumber;
-(id)initWithRecord:(id)arg1 ;
-(NSURL *)shipmentTrackingURL;
-(void)setTrackingNumber:(NSString *)arg1 ;
-(NSString *)shippingCompany;
-(void)setShippingCompany:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)physicalCardIdentifier;
-(void)setPhysicalCardIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)shippingStatus;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)formattedEstimatedDeliveryDate;
-(BOOL)isEqualToPhysicalCardShippingUpdate:(id)arg1 ;
-(void)setShippingStatus:(long long)arg1 ;
-(NSString *)localizedDeliveryExceptionReason;
-(NSDateComponents *)estimatedDeliveryDate;
-(void)setLocalizedDeliveryExceptionReason:(NSString *)arg1 ;
-(void)setEstimatedDeliveryDate:(NSDateComponents *)arg1 ;
@end

