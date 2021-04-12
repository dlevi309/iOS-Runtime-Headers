/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSSet, NSString;

@interface RBSInheritanceChangeSet : NSObject <BSXPCSecureCoding> {

	NSSet* _gainedInheritances;
	NSSet* _lostInheritances;

}

@property (nonatomic,copy,readonly) NSSet * gainedInheritances;              //@synthesize gainedInheritances=_gainedInheritances - In the implementation block
@property (nonatomic,copy,readonly) NSSet * lostInheritances;                //@synthesize lostInheritances=_lostInheritances - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)initWithGainedInheritances:(id)arg1 lostInheritances:(id)arg2 ;
-(NSSet *)gainedInheritances;
-(NSSet *)lostInheritances;
@end

