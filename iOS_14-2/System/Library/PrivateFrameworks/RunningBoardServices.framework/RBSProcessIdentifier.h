/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/RBSProcessIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RBSProcessIdentifier : NSObject <RBSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding, NSCopying> {

	NSString* _description;
	int _pid;

}

@property (nonatomic,readonly) int pid;                             //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)identifierForIdentifier:(id)arg1 ;
+(id)identifierForCurrentProcess;
+(id)identifierWithPid:(int)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(int)rbs_pid;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(int)pid;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(id)processPredicate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithPid:(int)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

