/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class CDBDataProtectionObserver;

@interface EKDataProtectionObserver : NSObject {

	/*^block*/id _stateChangedCallback;
	CDBDataProtectionObserver* _dataProtectionObserver;

}

@property (nonatomic,retain) CDBDataProtectionObserver * dataProtectionObserver;              //@synthesize dataProtectionObserver=_dataProtectionObserver - In the implementation block
@property (nonatomic,copy) id stateChangedCallback;                                           //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (nonatomic,readonly) BOOL dataIsAccessible; 
+(id)stateChangedNotificationName;
-(id)init;
-(void)setStateChangedCallback:(id)arg1 ;
-(id)stateChangedCallback;
-(void)setDataProtectionObserver:(CDBDataProtectionObserver *)arg1 ;
-(void)_dataProtectionStateChanged;
-(CDBDataProtectionObserver *)dataProtectionObserver;
-(BOOL)dataIsAccessible;
@end

