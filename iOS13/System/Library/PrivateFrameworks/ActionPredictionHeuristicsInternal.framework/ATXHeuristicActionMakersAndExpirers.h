/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSSet;

@interface ATXHeuristicActionMakersAndExpirers : NSObject <NSSecureCoding> {

	NSArray* _actionMakers;
	NSSet* _expirers;

}

@property (nonatomic,readonly) NSArray * actionMakers;              //@synthesize actionMakers=_actionMakers - In the implementation block
@property (nonatomic,readonly) NSSet * expirers;                    //@synthesize expirers=_expirers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithActionMakers:(id)arg1 expirers:(id)arg2 ;
-(NSArray *)actionMakers;
-(NSSet *)expirers;
@end

