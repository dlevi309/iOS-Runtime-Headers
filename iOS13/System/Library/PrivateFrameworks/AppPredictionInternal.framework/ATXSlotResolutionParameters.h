/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATXAction, ATXSlotSet, NSArray;

@interface ATXSlotResolutionParameters : NSObject <NSCopying> {

	ATXAction* _action;
	ATXSlotSet* _slots;
	NSArray* _values;
	unsigned long long _hash;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAction:(id)arg1 slots:(id)arg2 ;
@end

