/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSError, NSString, NSDictionary;

@interface IDSEngramKeyFetchMetric : NSObject <CUTCoreAnalyticsMetric> {

	NSError* _keyFetchError;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSError * keyFetchError;                    //@synthesize keyFetchError=_keyFetchError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)name;
-(NSError *)keyFetchError;
-(id)initWithKeyFetchError:(id)arg1 ;
@end

