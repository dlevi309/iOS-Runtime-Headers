/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSDictionary, NSString;

@interface IDSPNRMetric : NSObject <CUTCoreAnalyticsMetric> {

	long long _pnrReason;
	long long _mechanism;

}

@property (assign,nonatomic) long long pnrReason;                                    //@synthesize pnrReason=_pnrReason - In the implementation block
@property (assign,nonatomic) long long mechanism;                                    //@synthesize mechanism=_mechanism - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)name;
-(long long)mechanism;
-(void)setMechanism:(long long)arg1 ;
-(long long)pnrReason;
-(id)initWithPNRReason:(long long)arg1 mechanism:(long long)arg2 ;
-(void)setPnrReason:(long long)arg1 ;
@end

