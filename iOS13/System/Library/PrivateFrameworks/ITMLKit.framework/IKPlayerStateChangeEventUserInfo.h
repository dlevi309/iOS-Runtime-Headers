/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface IKPlayerStateChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	NSMutableDictionary* _mutableProperties;
	long long _state;
	long long _oldState;

}

@property (nonatomic,readonly) long long state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long oldState;                     //@synthesize oldState=_oldState - In the implementation block
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double elapsedTime; 
@property (assign,nonatomic) double rate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
+(id)stateNameForState:(long long)arg1 ;
+(long long)stateForStateName:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(long long)state;
-(double)duration;
-(NSDictionary *)properties;
-(id)initWithState:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)elapsedTime;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(void)setElapsedTime:(double)arg1 ;
-(id)initWithState:(long long)arg1 oldState:(long long)arg2 ;
-(long long)oldState;
@end

