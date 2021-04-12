/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSMutableArray, NSMutableDictionary;

@interface BLTSectionInfoSyncCoordinator : NSObject {

	unsigned long long _stateHandler;
	/*^block*/id _infoProvider;
	NSMutableArray* _alertingSectionIDs;
	NSMutableDictionary* _alertingSectionState;
	unsigned long long _mostRecentIndex;
	unsigned long long _mostRecentIndexSinceSync;

}

@property (nonatomic,copy) id infoProvider;                                            //@synthesize infoProvider=_infoProvider - In the implementation block
@property (nonatomic,retain) NSMutableArray * alertingSectionIDs;                      //@synthesize alertingSectionIDs=_alertingSectionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * alertingSectionState;               //@synthesize alertingSectionState=_alertingSectionState - In the implementation block
@property (assign,nonatomic) unsigned long long mostRecentIndex;                       //@synthesize mostRecentIndex=_mostRecentIndex - In the implementation block
@property (assign,nonatomic) unsigned long long mostRecentIndexSinceSync;              //@synthesize mostRecentIndexSinceSync=_mostRecentIndexSinceSync - In the implementation block
-(void)setInfoProvider:(id)arg1 ;
-(id)infoProvider;
-(id)description;
-(void)dealloc;
-(id)initWithAlertingSectionIDs:(id)arg1 infoProvider:(/*^block*/id)arg2 ;
-(unsigned long long)performSyncForSectionID:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)effectiveSectionInfoForSectionIDIndex:(unsigned long long)arg1 ;
-(void)sectionInfoSendCompleted:(unsigned long long)arg1 ;
-(NSMutableArray *)alertingSectionIDs;
-(void)setAlertingSectionIDs:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)alertingSectionState;
-(void)setAlertingSectionState:(NSMutableDictionary *)arg1 ;
-(unsigned long long)mostRecentIndex;
-(void)setMostRecentIndex:(unsigned long long)arg1 ;
-(unsigned long long)mostRecentIndexSinceSync;
-(void)setMostRecentIndexSinceSync:(unsigned long long)arg1 ;
@end

