/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(VNRequest *)request;
-(id)initWithRequest:(id)arg1 observationsCacheKey:(id)arg2 ;
-(id<NSObject><NSCopying>)observationsCacheKey;
@end

