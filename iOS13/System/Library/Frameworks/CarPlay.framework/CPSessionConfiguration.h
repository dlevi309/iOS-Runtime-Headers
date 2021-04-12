/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/


@protocol CPSessionConfigurationDelegate;
@class CARSessionStatus;

@interface CPSessionConfiguration : NSObject {

	unsigned long long _limitedUserInterfaces;
	unsigned long long _contentStyle;
	id<CPSessionConfigurationDelegate> _delegate;
	CARSessionStatus* _currentStatus;

}

@property (assign,nonatomic) unsigned long long limitedUserInterfaces;                        //@synthesize limitedUserInterfaces=_limitedUserInterfaces - In the implementation block
@property (nonatomic,retain) CARSessionStatus * currentStatus;                                //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign,nonatomic) unsigned long long contentStyle;                                 //@synthesize contentStyle=_contentStyle - In the implementation block
@property (assign,nonatomic,__weak) id<CPSessionConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned long long)convertLimitableUserInterfaces:(unsigned long long)arg1 ;
-(void)dealloc;
-(id<CPSessionConfigurationDelegate>)delegate;
-(void)setDelegate:(id<CPSessionConfigurationDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_limitedUIDidChange:(id)arg1 ;
-(void)setCurrentStatus:(CARSessionStatus *)arg1 ;
-(CARSessionStatus *)currentStatus;
-(unsigned long long)contentStyle;
-(void)setContentStyle:(unsigned long long)arg1 ;
-(void)_updateLimitedUIStatus;
-(void)_updateNightMode;
-(void)_nightModeDidChange:(id)arg1 ;
-(void)setLimitedUserInterfaces:(unsigned long long)arg1 ;
-(unsigned long long)limitedUserInterfaces;
@end

