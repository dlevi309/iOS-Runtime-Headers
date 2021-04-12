/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)run;
-(void)cancel;
-(void)_run;
-(ISDialog *)dialog;
-(void)setDialog:(ISDialog *)arg1 ;
-(NSArray *)textFieldValues;
-(id)userNotification;
-(void)setUserNotification:(id)arg1 ;
-(ISDialogButton *)selectedButton;
-(void)setSelectedButton:(ISDialogButton *)arg1 ;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(BOOL)performDefaultActions;
-(void)_showUserNotification:(id)arg1 ;
-(void)_waitForUserNotificationResponse:(CFUserNotificationRef)arg1 ;
-(void)_handleResponseForNotification:(CFUserNotificationRef)arg1 responseFlags:(unsigned long long)arg2 ;
-(void)setPerformDefaultActions:(BOOL)arg1 ;
@end

