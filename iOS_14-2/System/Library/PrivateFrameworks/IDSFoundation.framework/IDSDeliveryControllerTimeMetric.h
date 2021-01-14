/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTRTCMetric.h>

@class NSString, NSDictionary;

@interface IDSDeliveryControllerTimeMetric : NSObject <CUTRTCMetric> {

	double _timeToSend;
	long long _endpointCount;
	BOOL _usedPipeline;
	BOOL _usedMMCS;
	long long _responseCode;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned short rtcType; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) double timeToSend;                                    //@synthesize timeToSend=_timeToSend - In the implementation block
@property (nonatomic,readonly) long long endpointCount;                              //@synthesize endpointCount=_endpointCount - In the implementation block
@property (nonatomic,readonly) BOOL usedPipeline;                                    //@synthesize usedPipeline=_usedPipeline - In the implementation block
@property (nonatomic,readonly) BOOL usedMMCS;                                        //@synthesize usedMMCS=_usedMMCS - In the implementation block
@property (nonatomic,readonly) long long responseCode;                               //@synthesize responseCode=_responseCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(double)timeToSend;
-(long long)endpointCount;
-(BOOL)usedPipeline;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 endpointCount:(long long)arg3 usedPipeline:(BOOL)arg4 usedMMCS:(BOOL)arg5 responseCode:(long long)arg6 ;
-(unsigned short)rtcType;
-(NSString *)name;
-(BOOL)usedMMCS;
-(long long)responseCode;
@end

