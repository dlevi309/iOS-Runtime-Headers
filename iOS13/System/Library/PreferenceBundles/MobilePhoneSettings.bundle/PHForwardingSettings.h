/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/


@class NSString;

@interface PHForwardingSettings : NSObject {

	unsigned _callForwardingState;
	NSString* _callForwardingNumber;
	NSString* _defaultCallForwardingNumber;
	NSString* _defaultCallForwardingNumberPreferencesKey;

}

@property (assign) unsigned callForwardingState;                                                //@synthesize callForwardingState=_callForwardingState - In the implementation block
@property (nonatomic,retain) NSString * callForwardingNumber;                                   //@synthesize callForwardingNumber=_callForwardingNumber - In the implementation block
@property (nonatomic,retain) NSString * defaultCallForwardingNumber;                            //@synthesize defaultCallForwardingNumber=_defaultCallForwardingNumber - In the implementation block
@property (nonatomic,retain) NSString * defaultCallForwardingNumberPreferencesKey;              //@synthesize defaultCallForwardingNumberPreferencesKey=_defaultCallForwardingNumberPreferencesKey - In the implementation block
-(NSString *)callForwardingNumber;
-(void)setCallForwardingNumber:(NSString *)arg1 ;
-(unsigned)callForwardingState;
-(void)setCallForwardingState:(unsigned)arg1 ;
-(NSString *)defaultCallForwardingNumber;
-(void)setDefaultCallForwardingNumber:(NSString *)arg1 ;
-(NSString *)defaultCallForwardingNumberPreferencesKey;
-(void)setDefaultCallForwardingNumberPreferencesKey:(NSString *)arg1 ;
@end

