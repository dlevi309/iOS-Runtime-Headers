/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXLaunchEventProtocol.h>

@class NSString, NSDateInterval, INIntent, ATXAction;

@interface _APRIntentEvent : NSObject <NSSecureCoding, ATXLaunchEventProtocol> {

	NSString* _intentType;
	NSString* _bundleId;
	NSDateInterval* _dateInterval;
	INIntent* _intent;
	ATXAction* _action;
	NSString* _arg1;
	NSString* _arg2;

}

@property (nonatomic,copy,readonly) NSString * intentType;                      //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                                 //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) INIntent * intent;                          //@synthesize intent=_intent - In the implementation block
@property (nonatomic,copy,readonly) ATXAction * action;                         //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * arg1;                                     //@synthesize arg1=_arg1 - In the implementation block
@property (nonatomic,copy) NSString * arg2;                                     //@synthesize arg2=_arg2 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)startDate;
-(id)endDate;
-(ATXAction *)action;
-(NSString *)intentType;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(INIntent *)intent;
-(NSDateInterval *)dateInterval;
-(id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3 ;
-(id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3 intent:(id)arg4 ;
-(id)initWithBundleId:(id)arg1 intentType:(id)arg2 dateInterval:(id)arg3 action:(id)arg4 ;
-(void)setArg1:(NSString *)arg1 ;
-(void)setArg2:(NSString *)arg1 ;
-(BOOL)isEqualToAPRIntentEvent:(id)arg1 ;
-(NSString *)arg1;
-(NSString *)arg2;
@end

