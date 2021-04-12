/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, NSMutableDictionary, NSString;

@interface PSUICoreTelephonyRegistrationCache : NSObject <CoreTelephonyClientRegistrationDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _client;
	NSMutableDictionary* _imsStatusVoiceDict;
	NSMutableDictionary* _imsStatusSMSDict;
	NSMutableDictionary* _rejectCauseCodeDict;
	NSMutableDictionary* _supportedDataRatesDict;
	NSMutableDictionary* _maxDataRateDict;
	NSMutableDictionary* _operatorNameDict;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                    //@synthesize client=_client - In the implementation block
@property (retain) NSMutableDictionary * imsStatusVoiceDict;                  //@synthesize imsStatusVoiceDict=_imsStatusVoiceDict - In the implementation block
@property (retain) NSMutableDictionary * imsStatusSMSDict;                    //@synthesize imsStatusSMSDict=_imsStatusSMSDict - In the implementation block
@property (retain) NSMutableDictionary * rejectCauseCodeDict;                 //@synthesize rejectCauseCodeDict=_rejectCauseCodeDict - In the implementation block
@property (retain) NSMutableDictionary * supportedDataRatesDict;              //@synthesize supportedDataRatesDict=_supportedDataRatesDict - In the implementation block
@property (retain) NSMutableDictionary * maxDataRateDict;                     //@synthesize maxDataRateDict=_maxDataRateDict - In the implementation block
@property (retain) NSMutableDictionary * operatorNameDict;                    //@synthesize operatorNameDict=_operatorNameDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(void)willEnterForeground;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)imsRegistrationChanged:(id)arg1 info:(id)arg2 ;
-(id)initPrivate;
-(BOOL)IMSStatusVoice:(id)arg1 ;
-(BOOL)IMSStatusSMS:(id)arg1 ;
-(id)localizedOperatorName:(id)arg1 ;
-(id)rejectCauseCode:(id)arg1 ;
-(void)setMaxDataRate:(id)arg1 dataRate:(long long)arg2 ;
-(long long)maxDataRate:(id)arg1 ;
-(id)supportedDataRates:(id)arg1 ;
-(void)setImsStatusVoiceDict:(NSMutableDictionary *)arg1 ;
-(void)setImsStatusSMSDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)imsStatusVoiceDict;
-(void)fetchIMSStatus;
-(NSMutableDictionary *)imsStatusSMSDict;
-(void)setRejectCauseCodeDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)rejectCauseCodeDict;
-(void)fetchRejectCauseCode;
-(void)setSupportedDataRatesDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)supportedDataRatesDict;
-(void)fetchSupportedDataRates;
-(void)setMaxDataRateDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)maxDataRateDict;
-(void)fetchMaxDataRate;
-(void)setOperatorNameDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)operatorNameDict;
-(void)fetchLocalizedOperatorName;
@end

