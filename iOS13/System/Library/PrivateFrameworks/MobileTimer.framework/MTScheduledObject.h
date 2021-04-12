/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(unsigned long long)scheduledTypeForTriggerType:(unsigned long long)arg1 ;
+(id)scheduledObjectForScheduleable:(id)arg1 trigger:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(BOOL)isVisible;
-(MTTrigger *)trigger;
-(void)setTrigger:(MTTrigger *)arg1 ;
-(id<MTScheduleable>)scheduleable;
-(id)initWithScheduleable:(id)arg1 trigger:(id)arg2 ;
-(BOOL)isEqualToScheduledObject:(id)arg1 ;
-(void)setScheduleable:(id<MTScheduleable>)arg1 ;
@end

