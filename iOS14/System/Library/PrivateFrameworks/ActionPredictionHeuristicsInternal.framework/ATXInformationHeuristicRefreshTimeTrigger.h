/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <ActionPredictionHeuristicsInternal/ATXInformationHeuristicRefreshTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source;
@class NSObject, NSDate;

@interface ATXInformationHeuristicRefreshTimeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {

	NSObject*<OS_dispatch_source> _source;
	NSDate* _fireDate;

}

@property (nonatomic,readonly) NSDate * fireDate;              //@synthesize fireDate=_fireDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)fireDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_start;
-(id)description;
-(void)_stop;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFireDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

