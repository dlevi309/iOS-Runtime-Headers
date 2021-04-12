/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARTechniqueGatherContext.h>
#import <ARKitCore/ARDaemonSecureCoding.h>

@class NSMutableArray;

@interface ARTechniqueSequentialGatherContext : ARTechniqueGatherContext <ARDaemonSecureCoding> {

	NSMutableArray* _gatheredData;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)gatheredData;
-(id)initWithParentContext:(id)arg1 ;
-(void)addResultData:(id)arg1 ;
-(void)mergeResultsOfContext:(id)arg1 resultFilterBlock:(/*^block*/id)arg2 ;
@end

