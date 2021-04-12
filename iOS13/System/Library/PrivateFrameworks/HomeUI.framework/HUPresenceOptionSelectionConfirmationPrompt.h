/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)alertBody;
-(NSString *)alertTitle;
-(id)initWithAlertTitle:(id)arg1 alertBody:(id)arg2 resetLocationToHomeOnConfirmation:(BOOL)arg3 ;
-(BOOL)resetLocationToHomeOnConfirmation;
@end

