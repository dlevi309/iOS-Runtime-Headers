/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/RBSProcessMatching.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class NSString;

@interface RBSProcessPredicateImpl : NSObject <RBSProcessMatching, RBSXPCSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)processIdentifier;
-(id)processPredicate;
-(NSString *)description;
-(unsigned long long)hash;
@end

