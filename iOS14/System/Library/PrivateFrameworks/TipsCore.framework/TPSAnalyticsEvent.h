/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPSAnalyticsDataProvider, NSDate, NSString;

@interface TPSAnalyticsEvent : NSObject <NSSecureCoding> {

	TPSAnalyticsDataProvider* _dataProvider;
	NSDate* _date;
	NSString* _deliveryInfoVersion;

}

@property (assign,nonatomic,__weak) TPSAnalyticsDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * deliveryInfoVersion;                                //@synthesize deliveryInfoVersion=_deliveryInfoVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)setDataProvider:(TPSAnalyticsDataProvider *)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)log;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(void)setDate:(NSDate *)arg1 ;
-(id)_discoverabilityStream;
-(void)persistKeys;
-(id)duetEvent;
-(id)analyticsEventRepresentation;
-(void)setDeliveryInfoVersion:(NSString *)arg1 ;
-(TPSAnalyticsDataProvider *)dataProvider;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)mutableAnalyticsEventRepresentation;
-(NSString *)deliveryInfoVersion;
@end

