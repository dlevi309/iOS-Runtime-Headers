/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/NowPlaying-iOS.feature/NowPlaying-iOS
*/


@class NSString, NSDate, ACCStatInfoAccumulator;

@interface ACCMemUsageStatInfo : NSObject {

	NSString* _name;
	NSDate* _startTime;
	NSDate* _lastUpdateTime;
	ACCStatInfoAccumulator* _residentMem;
	ACCStatInfoAccumulator* _virtualMem;
	ACCStatInfoAccumulator* _physFootprintMem;

}

@property (nonatomic,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateTime;                                //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (nonatomic,readonly) ACCStatInfoAccumulator * residentMem;                   //@synthesize residentMem=_residentMem - In the implementation block
@property (nonatomic,readonly) ACCStatInfoAccumulator * virtualMem;                    //@synthesize virtualMem=_virtualMem - In the implementation block
@property (nonatomic,readonly) ACCStatInfoAccumulator * physFootprintMem;              //@synthesize physFootprintMem=_physFootprintMem - In the implementation block
-(id)init;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSDate *)startTime;
-(NSDate *)lastUpdateTime;
-(void)setInfo:(id)arg1 ;
-(ACCStatInfoAccumulator *)residentMem;
-(ACCStatInfoAccumulator *)virtualMem;
-(ACCStatInfoAccumulator *)physFootprintMem;
-(double)timeIntervalSinceLastUpdate;
-(double)timeIntervalSinceStart;
-(id)initWithName:(id)arg1 andInfo:(id)arg2 ;
-(void)updateResident:(unsigned long long)arg1 virtualValue:(unsigned long long)arg2 physFootprintValue:(unsigned long long)arg3 ;
@end

