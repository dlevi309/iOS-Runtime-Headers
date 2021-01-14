/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MXCallStackTree : NSObject <NSSecureCoding> {

	BOOL _callStackPerThread;
	NSArray* _callStackThreads;

}

@property (readonly) NSArray * callStackThreads;              //@synthesize callStackThreads=_callStackThreads - In the implementation block
@property (readonly) BOOL callStackPerThread;                 //@synthesize callStackPerThread=_callStackPerThread - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)JSONRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithThreadArray:(id)arg1 aggregatedByProcess:(BOOL)arg2 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)callStackThreads;
-(BOOL)callStackPerThread;
@end

