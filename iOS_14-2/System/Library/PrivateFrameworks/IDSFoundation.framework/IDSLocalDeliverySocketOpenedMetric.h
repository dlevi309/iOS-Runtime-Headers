/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSDictionary, NSString;

@interface IDSLocalDeliverySocketOpenedMetric : NSObject <CUTCoreAnalyticsMetric> {

	BOOL _isToDefaultPairedDevice;
	NSString* _service;
	unsigned long long _openError;
	unsigned long long _socketError;

}

@property (nonatomic,readonly) NSString * service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL isToDefaultPairedDevice;                //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (nonatomic,readonly) unsigned long long openError;                //@synthesize openError=_openError - In the implementation block
@property (nonatomic,readonly) unsigned long long socketError;              //@synthesize socketError=_socketError - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)name;
-(unsigned long long)socketError;
-(BOOL)isToDefaultPairedDevice;
-(id)initWithService:(id)arg1 isToDefaultPairedDevice:(BOOL)arg2 openError:(unsigned long long)arg3 socketError:(unsigned long long)arg4 ;
-(unsigned long long)openError;
-(NSString *)service;
@end

