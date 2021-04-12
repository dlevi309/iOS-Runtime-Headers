/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXDuetEvent.h>

@class NSString, NSArray, NSNumber;

@interface ATXAppIntentDuetEvent : ATXDuetEvent {

	NSString* _bundleId;
	NSString* _actionType;
	NSArray* _parameterHashes;
	NSArray* _slotSetHashes;
	NSNumber* _paramCount;

}

@property (nonatomic,readonly) NSString * bundleId;                    //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * actionType;                  //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) NSArray * parameterHashes;              //@synthesize parameterHashes=_parameterHashes - In the implementation block
@property (nonatomic,readonly) NSArray * slotSetHashes;                //@synthesize slotSetHashes=_slotSetHashes - In the implementation block
@property (nonatomic,readonly) NSNumber * paramCount;                  //@synthesize paramCount=_paramCount - In the implementation block
-(id)description;
-(id)identifier;
-(NSString *)bundleId;
-(NSString *)actionType;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithCurrentContextStoreValues;
-(NSNumber *)paramCount;
-(id)initWithBundleId:(id)arg1 actionType:(id)arg2 parameterHashes:(id)arg3 slotSetHashes:(id)arg4 paramCount:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 ;
-(NSArray *)parameterHashes;
-(NSArray *)slotSetHashes;
@end

