/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <ActionPredictionHeuristicsInternal/ATXHeuristicCacheExpirer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_source;
@class NSObject, NSDate;

@interface ATXHeuristicCacheTimeExpirer : ATXHeuristicCacheExpirer <NSSecureCoding> {

	NSObject*<OS_dispatch_source> _source;
	NSDate* _fireDate;

}

@property (nonatomic,readonly) NSDate * fireDate;              //@synthesize fireDate=_fireDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)fireDate;
-(void)_start;
-(void)_stop;
-(id)initWithFireDate:(id)arg1 ;
@end

