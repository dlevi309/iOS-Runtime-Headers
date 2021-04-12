/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol NSObjectNSCopying;
@class VNRequest;

@interface _VNRequestForensicsRequestAndObservationsCacheKeyTuple : NSObject {

	VNRequest* _request;
	id<NSObject><NSCopying> _observationsCacheKey;

}

@property (nonatomic,readonly) VNRequest * request;                                       //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id<NSObject><NSCopying> observationsCacheKey;              //@synthesize observationsCacheKey=_observationsCacheKey - In the implementation block
-(VNRequest *)request;
-(id)initWithRequest:(id)arg1 observationsCacheKey:(id)arg2 ;
-(id<NSObject><NSCopying>)observationsCacheKey;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

