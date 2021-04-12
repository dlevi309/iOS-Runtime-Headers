/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


#import <Network/Network-Structs.h>
@class NSString, NSMutableDictionary;

@interface NWAccumulation : NSObject {

	os_unfair_lock_s _lock;
	BOOL _isSnapshot;
	NSString* _name;
	NSMutableDictionary* _durations;
	NSString* _currentState;
	double _lastUpdateTime;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * durations;              //@synthesize durations=_durations - In the implementation block
@property (nonatomic,retain) NSString * currentState;                      //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) double lastUpdateTime;                        //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (assign,nonatomic) BOOL isSnapshot;                              //@synthesize isSnapshot=_isSnapshot - In the implementation block
-(id)snapshot;
-(void)setCurrentState:(NSString *)arg1 ;
-(NSString *)currentState;
-(BOOL)isSnapshot;
-(void)updateWithState:(id)arg1 atTime:(double)arg2 ;
-(void)setIsSnapshot:(BOOL)arg1 ;
-(double)lastUpdateTime;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)setLastUpdateTime:(double)arg1 ;
-(NSMutableDictionary *)durations;
-(void)reset;
-(void)setName:(NSString *)arg1 ;
-(void)setDurations:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

