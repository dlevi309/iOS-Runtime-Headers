/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(STKUSSDFilter *)ussdFilter;
-(BOOL)showClass0SMSFromField;
-(BOOL)canShowClass0SMSOverInCallAlerts;
-(id)initWithShowClass0SMSFromField:(BOOL)arg1 canShowClass0SMSOverInCallAlerts:(BOOL)arg2 ussdAlwaysFilteredPatterns:(id)arg3 ussdSometimesFilteredPatterns:(id)arg4 ;
-(NSArray *)ussdAlwaysFilteredPatterns;
-(NSArray *)ussdSometimesFilteredPatterns;
@end

