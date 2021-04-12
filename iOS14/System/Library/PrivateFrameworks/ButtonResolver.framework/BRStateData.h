/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)description;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id)propertyList;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSMutableDictionary *)speedConfigs;
-(NSMutableDictionary *)speedSlots;
-(id)initWithStateData:(id)arg1 ;
-(id)initWithState:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
@end

