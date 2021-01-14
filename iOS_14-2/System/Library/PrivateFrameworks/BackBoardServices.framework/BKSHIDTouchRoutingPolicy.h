/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BSMutableSettings, NSArray;

@interface BKSHIDTouchRoutingPolicy : NSObject <NSSecureCoding> {

	BSMutableSettings* _settings;

}

@property (nonatomic,retain) BSMutableSettings * settings;                                   //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) NSArray * contextIDsToAlwaysSendTouches; 
@property (nonatomic,copy) NSArray * contextIDsToExcludeFromHitTesting; 
@property (assign,getter=shouldAvoidHitTesting,nonatomic) BOOL avoidHitTesting; 
+(BOOL)supportsSecureCoding;
+(void)inspectChangesWithOldPolicy:(id)arg1 newPolicy:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSettings:(BSMutableSettings *)arg1 ;
-(void)setContextIDsToAlwaysSendTouches:(NSArray *)arg1 ;
-(BSMutableSettings *)settings;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldAvoidHitTesting;
-(void)setAvoidHitTesting:(BOOL)arg1 ;
-(NSArray *)contextIDsToExcludeFromHitTesting;
-(void)setContextIDsToExcludeFromHitTesting:(NSArray *)arg1 ;
-(NSArray *)contextIDsToAlwaysSendTouches;
@end

