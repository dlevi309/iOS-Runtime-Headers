/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@class NSSet;

@interface ASNotificationStep : NSObject {

	NSSet* _recordTypes;
	/*^block*/id _objectsTransformationBlock;
	/*^block*/id _objectTransformationBlock;
	/*^block*/id _shouldNotifyObserverBlock;
	/*^block*/id _notifyObserverBlock;

}

@property (nonatomic,retain) NSSet * recordTypes;                      //@synthesize recordTypes=_recordTypes - In the implementation block
@property (nonatomic,copy) id objectsTransformationBlock;              //@synthesize objectsTransformationBlock=_objectsTransformationBlock - In the implementation block
@property (nonatomic,copy) id objectTransformationBlock;               //@synthesize objectTransformationBlock=_objectTransformationBlock - In the implementation block
@property (nonatomic,copy) id shouldNotifyObserverBlock;               //@synthesize shouldNotifyObserverBlock=_shouldNotifyObserverBlock - In the implementation block
@property (nonatomic,copy) id notifyObserverBlock;                     //@synthesize notifyObserverBlock=_notifyObserverBlock - In the implementation block
-(NSSet *)recordTypes;
-(void)setRecordTypes:(NSSet *)arg1 ;
-(id)objectsTransformationBlock;
-(id)objectTransformationBlock;
-(id)objectsTransformedFromRecords:(id)arg1 cloudKitManager:(id)arg2 ;
-(void)setObjectsTransformationBlock:(id)arg1 ;
-(void)setObjectTransformationBlock:(id)arg1 ;
-(id)shouldNotifyObserverBlock;
-(void)setShouldNotifyObserverBlock:(id)arg1 ;
-(id)notifyObserverBlock;
-(void)setNotifyObserverBlock:(id)arg1 ;
@end

