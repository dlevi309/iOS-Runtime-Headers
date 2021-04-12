/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/NowPlaying-iOS.feature/NowPlaying-iOS
*/


@class NSString, ACCMemUsageStatInfo, NSMutableDictionary;

@interface ACCMemUsageStat : NSObject {

	NSString* _name;
	ACCMemUsageStatInfo* _statInfo;
	NSMutableDictionary* _markList;

}

@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) ACCMemUsageStatInfo * statInfo;              //@synthesize statInfo=_statInfo - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * markList;              //@synthesize markList=_markList - In the implementation block
-(ACCMemUsageStatInfo *)statInfo;
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)update;
-(id)description;
-(void)mark:(id)arg1 ;
-(double)timeIntervalSinceStart;
-(double)timeIntervalSinceLastUpdate;
-(id)getMark:(id)arg1 ;
-(void)removeMark:(id)arg1 ;
-(double)timeIntervalSinceMark:(id)arg1 ;
-(NSMutableDictionary *)markList;
@end

