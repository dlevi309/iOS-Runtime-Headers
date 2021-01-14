/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class VNRequest, NSError;

@interface _VNRequestForensicsRequestAndErrorTuple : NSObject {

	VNRequest* _request;
	NSError* _error;

}

@property (nonatomic,readonly) VNRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSError * error;                  //@synthesize error=_error - In the implementation block
-(VNRequest *)request;
-(NSError *)error;
-(id)description;
-(unsigned long long)hash;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

