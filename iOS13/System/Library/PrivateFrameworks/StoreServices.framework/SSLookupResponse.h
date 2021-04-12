/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)itemForKey:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(NSArray *)allItems;
-(id)initWithResponseDictionary:(id)arg1 ;
-(void)_enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(SSMetricsPageEvent *)metricsPageEvent;
-(void)_setMetricsPageEvent:(id)arg1 ;
-(id)initWithLocationResponseDictionary:(id)arg1 ;
-(SSMetricsConfiguration *)metricsConfiguration;
@end

