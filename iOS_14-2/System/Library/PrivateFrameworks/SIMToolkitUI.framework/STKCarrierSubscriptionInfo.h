/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


@class NSArray, STKUSSDFilter;

@interface STKCarrierSubscriptionInfo : NSObject {

	BOOL _canShowClass0SMSOverInCallAlerts;
	BOOL _showClass0SMSFromField;
	NSArray* _ussdAlwaysFilteredPatterns;
	NSArray* _ussdSometimesFilteredPatterns;
	STKUSSDFilter* _ussdFilter;

}

@property (nonatomic,readonly) BOOL canShowClass0SMSOverInCallAlerts;                //@synthesize canShowClass0SMSOverInCallAlerts=_canShowClass0SMSOverInCallAlerts - In the implementation block
@property (nonatomic,readonly) BOOL showClass0SMSFromField;                          //@synthesize showClass0SMSFromField=_showClass0SMSFromField - In the implementation block
@property (nonatomic,readonly) NSArray * ussdAlwaysFilteredPatterns;                 //@synthesize ussdAlwaysFilteredPatterns=_ussdAlwaysFilteredPatterns - In the implementation block
@property (nonatomic,readonly) NSArray * ussdSometimesFilteredPatterns;              //@synthesize ussdSometimesFilteredPatterns=_ussdSometimesFilteredPatterns - In the implementation block
@property (nonatomic,readonly) STKUSSDFilter * ussdFilter;                           //@synthesize ussdFilter=_ussdFilter - In the implementation block
-(NSArray *)ussdAlwaysFilteredPatterns;
-(NSArray *)ussdSometimesFilteredPatterns;
-(id)initWithShowClass0SMSFromField:(BOOL)arg1 canShowClass0SMSOverInCallAlerts:(BOOL)arg2 ussdAlwaysFilteredPatterns:(id)arg3 ussdSometimesFilteredPatterns:(id)arg4 ;
-(BOOL)canShowClass0SMSOverInCallAlerts;
-(BOOL)showClass0SMSFromField;
-(STKUSSDFilter *)ussdFilter;
@end

