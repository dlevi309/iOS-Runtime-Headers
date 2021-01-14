/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTScheduleable;
@class MTTrigger, NSString;

@interface MTScheduledObject : NSObject <NAEquatable, NSCopying> {

	id<MTScheduleable> _scheduleable;
	MTTrigger* _trigger;

}

@property (nonatomic,copy) id<MTScheduleable> scheduleable;              //@synthesize scheduleable=_scheduleable - In the implementation block
@property (nonatomic,copy) MTTrigger * trigger;                          //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scheduledObjectForScheduleable:(id)arg1 trigger:(id)arg2 ;
+(unsigned long long)scheduledTypeForTriggerType:(unsigned long long)arg1 ;
-(MTTrigger *)trigger;
-(id)initWithScheduleable:(id)arg1 trigger:(id)arg2 ;
-(BOOL)isEqualToScheduledObject:(id)arg1 ;
-(void)setScheduleable:(id<MTScheduleable>)arg1 ;
-(id<MTScheduleable>)scheduleable;
-(void)setTrigger:(MTTrigger *)arg1 ;
-(NSString *)description;
-(BOOL)isVisible;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

