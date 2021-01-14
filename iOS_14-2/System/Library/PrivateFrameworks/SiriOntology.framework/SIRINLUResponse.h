/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SIRINLURequestID, NSArray;

@interface SIRINLUResponse : NSObject <NSSecureCoding> {

	SIRINLURequestID* _requestId;
	NSArray* _parses;

}

@property (nonatomic,retain) SIRINLURequestID * requestId;              //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) NSArray * parses;                          //@synthesize parses=_parses - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)parses;
-(void)setRequestId:(SIRINLURequestID *)arg1 ;
-(id)description;
-(SIRINLURequestID *)requestId;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestId:(id)arg1 parses:(id)arg2 ;
-(void)setParses:(NSArray *)arg1 ;
@end

