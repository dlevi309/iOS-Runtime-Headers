/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class VNRequest, NSArray;

@interface _VNRequestForensicsParentChildRequests : NSObject {

	VNRequest* _parentRequest;
	NSArray* _orderedChildRequests;

}

@property (nonatomic,readonly) VNRequest * parentRequest;                        //@synthesize parentRequest=_parentRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedChildRequests;              //@synthesize orderedChildRequests=_orderedChildRequests - In the implementation block
-(VNRequest *)parentRequest;
-(id)initWithParentRequest:(id)arg1 orderedChildRequests:(id)arg2 ;
-(NSArray *)orderedChildRequests;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

