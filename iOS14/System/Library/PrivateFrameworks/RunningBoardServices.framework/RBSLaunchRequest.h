/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSRequest.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSLaunchContext, NSString;

@interface RBSLaunchRequest : RBSRequest <RBSXPCSecureCoding, NSCopying> {

	RBSLaunchContext* _context;

}

@property (nonatomic,readonly) RBSLaunchContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)execute:(out id*)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(RBSLaunchContext *)context;
-(NSString *)description;
-(BOOL)execute:(out id*)arg1 assertion:(out id*)arg2 error:(out id*)arg3 ;
-(BOOL)execute:(out id*)arg1 error:(out id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

