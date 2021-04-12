/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(NSError *)keyFetchError;
-(id)initWithKeyFetchError:(id)arg1 ;
@end

