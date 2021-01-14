/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSDictionary;

@interface IDSSessionConnectedMetric : NSObject <CUTCoreAnalyticsMetric> {

	NSString* _guid;

}

@property (nonatomic,readonly) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)guid;
-(NSString *)name;
-(id)initWithGuid:(id)arg1 ;
@end

