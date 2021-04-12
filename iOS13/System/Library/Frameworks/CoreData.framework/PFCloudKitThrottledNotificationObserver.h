/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString;

@interface PFCloudKitThrottledNotificationObserver : NSObject {

	Ai _notificationIteration;
	NSString* _assertionLabel;
	NSString* _label;
	long long _notificationStalenessInterval;
	/*^block*/id _notificationHandlerBlock;

}

@property (nonatomic,retain) NSString * label;                                     //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long notificationStalenessInterval;              //@synthesize notificationStalenessInterval=_notificationStalenessInterval - In the implementation block
@property (nonatomic,copy) id notificationHandlerBlock;                            //@synthesize notificationHandlerBlock=_notificationHandlerBlock - In the implementation block
-(void)dealloc;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(void)setNotificationStalenessInterval:(long long)arg1 ;
-(void)setNotificationHandlerBlock:(id)arg1 ;
-(void)noteRecievedNotification:(id)arg1 ;
-(long long)notificationStalenessInterval;
-(id)notificationHandlerBlock;
@end

