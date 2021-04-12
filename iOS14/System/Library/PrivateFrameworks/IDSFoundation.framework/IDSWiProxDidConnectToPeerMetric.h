/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSDictionary, NSString;

@interface IDSWiProxDidConnectToPeerMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned long long _duration;
	unsigned long long _resultCode;

}

@property (nonatomic,readonly) unsigned long long duration;                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long resultCode;              //@synthesize resultCode=_resultCode - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)resultCode;
-(NSString *)name;
-(id)initWithDuration:(unsigned long long)arg1 resultCode:(unsigned long long)arg2 ;
-(unsigned long long)duration;
@end

