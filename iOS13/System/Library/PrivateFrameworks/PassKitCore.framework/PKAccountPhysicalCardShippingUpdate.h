/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSString *)physicalCardIdentifier;
-(void)setPhysicalCardIdentifier:(NSString *)arg1 ;
-(NSURL *)shipmentTrackingURL;
-(NSString *)trackingNumber;
-(void)setTrackingNumber:(NSString *)arg1 ;
-(NSString *)shippingCompany;
-(void)setShippingCompany:(NSString *)arg1 ;
-(BOOL)isEqualToPhysicalCardShippingUpdate:(id)arg1 ;
-(NSString *)formattedEstimatedDeliveryDate;
-(long long)shippingStatus;
-(void)setShippingStatus:(long long)arg1 ;
-(NSString *)localizedDeliveryExceptionReason;
-(void)setLocalizedDeliveryExceptionReason:(NSString *)arg1 ;
-(NSDateComponents *)estimatedDeliveryDate;
-(void)setEstimatedDeliveryDate:(NSDateComponents *)arg1 ;
@end

