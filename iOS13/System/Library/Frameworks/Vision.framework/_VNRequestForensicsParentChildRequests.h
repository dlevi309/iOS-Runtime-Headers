/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class VNRequest, NSArray;

@interface _VNRequestForensicsParentChildRequests : NSObject {

	VNRequest* _parentRequest;
	NSArray* _orderedChildRequests;

}

@property (nonatomic,readonly) VNRequest * parentRequest;                        //@synthesize parentRequest=_parentRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderedChildRequests;              //@synthesize orderedChildRequests=_orderedChildRequests - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithParentRequest:(id)arg1 orderedChildRequests:(id)arg2 ;
-(VNRequest *)parentRequest;
-(NSArray *)orderedChildRequests;
@end

