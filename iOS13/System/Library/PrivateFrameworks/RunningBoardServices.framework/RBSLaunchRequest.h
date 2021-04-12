/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSRequest.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSLaunchContext, NSString;

@interface RBSLaunchRequest : RBSRequest <BSXPCSecureCoding, NSCopying> {

	RBSLaunchContext* _context;

}

@property (nonatomic,readonly) RBSLaunchContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RBSLaunchContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)execute:(out id*)arg1 error:(out id*)arg2 ;
-(BOOL)execute:(out id*)arg1 ;
-(BOOL)execute:(out id*)arg1 assertion:(out id*)arg2 error:(out id*)arg3 ;
@end

