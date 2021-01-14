/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSString;

@interface HUPresenceOptionSelectionConfirmationPrompt : NSObject {

	BOOL _resetLocationToHomeOnConfirmation;
	NSString* _alertTitle;
	NSString* _alertBody;

}

@property (nonatomic,copy,readonly) NSString * alertTitle;                          //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertBody;                           //@synthesize alertBody=_alertBody - In the implementation block
@property (nonatomic,readonly) BOOL resetLocationToHomeOnConfirmation;              //@synthesize resetLocationToHomeOnConfirmation=_resetLocationToHomeOnConfirmation - In the implementation block
-(NSString *)alertBody;
-(id)init;
-(NSString *)alertTitle;
-(id)initWithAlertTitle:(id)arg1 alertBody:(id)arg2 resetLocationToHomeOnConfirmation:(BOOL)arg3 ;
-(BOOL)resetLocationToHomeOnConfirmation;
@end

