/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <AppPredictionInternal/ATXValueEstimationEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXDonationEvent : ATXValueEstimationEvent <NSCopying> {

	NSString* _eventIdentifier;

}

@property (nonatomic,readonly) NSString * eventIdentifier;              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)eventIdentifier;
-(id)toKey;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventType:(id)arg3 eventIdentifier:(id)arg4 eventOwner:(id)arg5 ;
@end

