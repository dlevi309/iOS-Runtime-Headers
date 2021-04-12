/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
*/


#import <ButtonResolver/ButtonResolver-Structs.h>
@class NSMutableDictionary;

@interface BRStateData : NSObject {

	BOOL _enabled;
	unsigned long long _state;
	NSMutableDictionary* _speedConfigs;
	NSMutableDictionary* _speedSlots;

}

@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * speedConfigs;              //@synthesize speedConfigs=_speedConfigs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * speedSlots;                //@synthesize speedSlots=_speedSlots - In the implementation block
@property (nonatomic,readonly) id propertyList; 
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)propertyList;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSMutableDictionary *)speedConfigs;
-(NSMutableDictionary *)speedSlots;
-(id)initWithStateData:(id)arg1 ;
-(id)initWithState:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
@end

