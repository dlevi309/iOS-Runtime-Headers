/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)expirers;
-(id)initWithActionMakers:(id)arg1 expirers:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)actionMakers;
-(id)initWithCoder:(id)arg1 ;
@end

