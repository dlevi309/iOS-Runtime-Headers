/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class VNRequest, NSError;

@interface _VNRequestForensicsRequestAndErrorTuple : NSObject {

	VNRequest* _request;
	NSError* _error;

}

@property (nonatomic,readonly) VNRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSError * error;                  //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSError *)error;
-(VNRequest *)request;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
@end

