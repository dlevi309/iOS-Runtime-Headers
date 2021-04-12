/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(BSMutableSettings *)settings;
-(void)setSettings:(BSMutableSettings *)arg1 ;
-(NSArray *)contextIDsToAlwaysSendTouches;
-(void)setContextIDsToAlwaysSendTouches:(NSArray *)arg1 ;
-(NSArray *)contextIDsToExcludeFromHitTesting;
-(void)setContextIDsToExcludeFromHitTesting:(NSArray *)arg1 ;
-(BOOL)shouldAvoidHitTesting;
-(void)setAvoidHitTesting:(BOOL)arg1 ;
@end

