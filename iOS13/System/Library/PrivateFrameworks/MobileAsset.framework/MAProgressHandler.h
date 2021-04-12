/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/


@class NSMutableArray;

@interface MAProgressHandler : NSObject {

	unsigned long long _notificationInterval;
	NSMutableArray* _callBackArray;

}

@property (assign,nonatomic) unsigned long long notificationInterval;              //@synthesize notificationInterval=_notificationInterval - In the implementation block
@property (nonatomic,readonly) NSMutableArray * callBackArray;                     //@synthesize callBackArray=_callBackArray - In the implementation block
-(void)dealloc;
-(void)addCallBack:(/*^block*/id)arg1 ;
-(id)initWithCallBack:(/*^block*/id)arg1 ;
-(unsigned long long)notificationInterval;
-(void)setNotificationInterval:(unsigned long long)arg1 ;
-(NSMutableArray *)callBackArray;
@end

