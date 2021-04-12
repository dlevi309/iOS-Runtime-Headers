/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class NSSet, NSString;

@interface RBSInheritanceChangeSet : NSObject <RBSXPCSecureCoding> {

	NSSet* _gainedInheritances;
	NSSet* _lostInheritances;

}

@property (nonatomic,copy,readonly) NSSet * gainedInheritances;              //@synthesize gainedInheritances=_gainedInheritances - In the implementation block
@property (nonatomic,copy,readonly) NSSet * lostInheritances;                //@synthesize lostInheritances=_lostInheritances - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(NSSet *)lostInheritances;
-(id)initWithGainedInheritances:(id)arg1 lostInheritances:(id)arg2 ;
-(NSSet *)gainedInheritances;
-(BOOL)isEqual:(id)arg1 ;
@end

