/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CDBDataProtectionObserver *)dataProtectionObserver;
-(void)_dataProtectionStateChanged;
-(void)setStateChangedCallback:(id)arg1 ;
-(void)setDataProtectionObserver:(CDBDataProtectionObserver *)arg1 ;
-(id)stateChangedCallback;
-(BOOL)dataIsAccessible;
@end

