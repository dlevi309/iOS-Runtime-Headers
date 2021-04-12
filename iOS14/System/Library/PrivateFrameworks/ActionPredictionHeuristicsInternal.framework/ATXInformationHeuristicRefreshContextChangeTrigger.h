/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <ActionPredictionHeuristicsInternal/ATXInformationHeuristicRefreshTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSSecureCoding;
@class _CDContextualKeyPath, NSObject, _CDContextualChangeRegistration;

@interface ATXInformationHeuristicRefreshContextChangeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {

	_CDContextualKeyPath* _contextKeyPath;
	NSObject*<NSCopying>*<NSSecureCoding> _value;
	double _minDurationInPreviousState;
	_CDContextualChangeRegistration* _registration;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_start;
-(id)description;
-(id)initWithCDContextualKeyPath:(id)arg1 equalToValue:(id)arg2 withMinimumDurationInPreviousState:(double)arg3 ;
-(void)_stop;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

