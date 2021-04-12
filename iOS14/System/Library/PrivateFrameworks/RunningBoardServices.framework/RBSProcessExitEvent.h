/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class RBSProcessHandle, RBSProcessExitContext, NSString;

@interface RBSProcessExitEvent : NSObject <RBSXPCSecureCoding> {

	RBSProcessHandle* _process;
	RBSProcessExitContext* _context;

}

@property (nonatomic,retain) RBSProcessHandle * process;                   //@synthesize process=_process - In the implementation block
@property (nonatomic,retain) RBSProcessExitContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(RBSProcessHandle *)process;
-(void)setProcess:(RBSProcessHandle *)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(RBSProcessExitContext *)context;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(RBSProcessExitContext *)arg1 ;
@end

