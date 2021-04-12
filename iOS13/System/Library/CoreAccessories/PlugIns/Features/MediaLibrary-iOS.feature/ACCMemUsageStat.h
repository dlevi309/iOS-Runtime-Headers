/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/MediaLibrary-iOS.feature/MediaLibrary-iOS
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
-(id)init;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(ACCMemUsageStatInfo *)statInfo;
-(BOOL)update;
-(void)mark:(id)arg1 ;
-(id)getMark:(id)arg1 ;
-(double)timeIntervalSinceLastUpdate;
-(void)removeMark:(id)arg1 ;
-(NSMutableDictionary *)markList;
-(double)timeIntervalSinceStart;
-(double)timeIntervalSinceMark:(id)arg1 ;
@end

