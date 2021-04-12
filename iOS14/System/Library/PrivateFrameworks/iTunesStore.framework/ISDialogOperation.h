/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, NSArray;

@interface ISDialogOperation : ISOperation {

	ISDialog* _dialog;
	BOOL _performDefaultActions;
	ISDialogButton* _selectedButton;
	NSArray* _textFieldValues;
	id _userNotification;

}

@property (retain) id userNotification;                                 //@synthesize userNotification=_userNotification - In the implementation block
@property (assign) id<ISDialogOperationDelegate> delegate; 
@property (retain) ISDialog * dialog;                                   //@synthesize dialog=_dialog - In the implementation block
@property (assign) BOOL performDefaultActions;                          //@synthesize performDefaultActions=_performDefaultActions - In the implementation block
@property (retain) ISDialogButton * selectedButton;                     //@synthesize selectedButton=_selectedButton - In the implementation block
@property (readonly) NSArray * textFieldValues; 
+(id)operationWithDialog:(id)arg1 ;
+(id)operationWithError:(id)arg1 ;
-(void)_run;
-(void)run;
-(ISDialog *)dialog;
-(id)init;
-(NSArray *)textFieldValues;
-(id)userNotification;
-(void)setUserNotification:(id)arg1 ;
-(void)setDialog:(ISDialog *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(ISDialogButton *)selectedButton;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(BOOL)performDefaultActions;
-(void)setSelectedButton:(ISDialogButton *)arg1 ;
-(void)_showUserNotification:(id)arg1 ;
-(void)_waitForUserNotificationResponse:(CFUserNotificationRef)arg1 ;
-(void)_handleResponseForNotification:(CFUserNotificationRef)arg1 responseFlags:(unsigned long long)arg2 ;
-(void)setPerformDefaultActions:(BOOL)arg1 ;
@end

