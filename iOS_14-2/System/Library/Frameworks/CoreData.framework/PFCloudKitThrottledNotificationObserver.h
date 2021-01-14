/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNotificationStalenessInterval:(long long)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(void)noteRecievedNotification:(id)arg1 ;
-(void)setNotificationHandlerBlock:(id)arg1 ;
-(id)notificationHandlerBlock;
-(long long)notificationStalenessInterval;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)dealloc;
@end

