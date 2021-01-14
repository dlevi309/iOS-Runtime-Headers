/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface CRKASMAtomicRosterConstraint : NSObject <NSCopying> {

	NSUUID* _identifier;
	/*^block*/id _rosterEvaluator;

}

@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id rosterEvaluator;               //@synthesize rosterEvaluator=_rosterEvaluator - In the implementation block
+(id)constraintWithRosterEvaluator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 rosterEvaluator:(/*^block*/id)arg2 ;
-(id)rosterEvaluator;
-(BOOL)isFulfilledByRoster:(id)arg1 ;
@end

