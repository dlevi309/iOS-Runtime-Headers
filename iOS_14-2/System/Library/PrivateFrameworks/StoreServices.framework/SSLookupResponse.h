/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSDate, NSMutableArray, SSMetricsPageEvent, NSDictionary, NSArray, SSMetricsConfiguration, NSString;

@interface SSLookupResponse : NSObject <SSXPCCoding> {

	NSDate* _expirationDate;
	NSMutableArray* _itemOrder;
	SSMetricsPageEvent* _metricsPageEvent;
	NSDictionary* _response;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary; 
@property (nonatomic,copy) NSDate * expirationDate;                                                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (setter=_setMetricsPageEvent:,nonatomic,retain) SSMetricsPageEvent * metricsPageEvent;              //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (nonatomic,readonly) NSArray * allItems; 
@property (nonatomic,readonly) SSMetricsConfiguration * metricsConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSArray *)allItems;
-(SSMetricsPageEvent *)metricsPageEvent;
-(void)_setMetricsPageEvent:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)initWithLocationResponseDictionary:(id)arg1 ;
-(SSMetricsConfiguration *)metricsConfiguration;
-(id)itemForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)_enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2 ;
-(void)dealloc;
@end

