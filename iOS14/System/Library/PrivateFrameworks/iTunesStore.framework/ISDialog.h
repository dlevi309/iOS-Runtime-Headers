/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, NSArray, NSString, NSLock, NSMutableDictionary, SSPaymentSheet;

@interface ISDialog : NSObject <SSXPCCoding> {

	BOOL _allowDuplicates;
	SSAuthenticationContext* _authenticationContext;
	BOOL _authorizationIsForced;
	NSArray* _buttons;
	long long _defaultButtonIndex;
	NSString* _displayCountKey;
	BOOL _dismissOnHomeButton;
	BOOL _dismissOnLock;
	BOOL _expectsResponse;
	BOOL _groupsTextFields;
	long long _kind;
	NSLock* _lock;
	long long _maxDisplayCount;
	NSString* _message;
	BOOL _noDefaultButton;
	BOOL _oneButtonPerLine;
	BOOL _shouldDismissAfterUnlock;
	BOOL _shouldDisplayAsTopMost;
	BOOL _shouldPendInSetupIfNotAllowed;
	NSArray* _textFields;
	NSString* _title;
	long long _unlockActionButtonIndex;
	NSMutableDictionary* _userInfo;
	CFDictionaryRef _userNotificationValues;
	BOOL _displaysOnLockscreen;
	SSPaymentSheet* _paymentSheet;
	NSString* _touchIDContinueToken;

}

@property (copy) NSString * touchIDContinueToken;                              //@synthesize touchIDContinueToken=_touchIDContinueToken - In the implementation block
@property (retain) NSArray * buttons;                                          //@synthesize buttons=_buttons - In the implementation block
@property (assign) long long defaultButtonIndex;                               //@synthesize defaultButtonIndex=_defaultButtonIndex - In the implementation block
@property (assign) BOOL oneButtonPerLine;                                      //@synthesize oneButtonPerLine=_oneButtonPerLine - In the implementation block
@property (assign) long long unlockActionButtonIndex;                          //@synthesize unlockActionButtonIndex=_unlockActionButtonIndex - In the implementation block
@property (assign) BOOL groupsTextFields;                                      //@synthesize groupsTextFields=_groupsTextFields - In the implementation block
@property (retain) NSArray * textFields;                                       //@synthesize textFields=_textFields - In the implementation block
@property (retain) NSString * message;                                         //@synthesize message=_message - In the implementation block
@property (retain) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (assign) BOOL allowDuplicates;                                       //@synthesize allowDuplicates=_allowDuplicates - In the implementation block
@property (assign) BOOL authorizationIsForced;                                 //@synthesize authorizationIsForced=_authorizationIsForced - In the implementation block
@property (assign) BOOL dismissOnHomeButton;                                   //@synthesize dismissOnHomeButton=_dismissOnHomeButton - In the implementation block
@property (assign) BOOL dismissOnLock;                                         //@synthesize dismissOnLock=_dismissOnLock - In the implementation block
@property (assign) BOOL expectsResponse;                                       //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (assign) BOOL shouldDismissAfterUnlock;                              //@synthesize shouldDismissAfterUnlock=_shouldDismissAfterUnlock - In the implementation block
@property (assign) BOOL shouldDisplayAsTopMost;                                //@synthesize shouldDisplayAsTopMost=_shouldDisplayAsTopMost - In the implementation block
@property (assign) BOOL shouldPendInSetupIfNotAllowed;                         //@synthesize shouldPendInSetupIfNotAllowed=_shouldPendInSetupIfNotAllowed - In the implementation block
@property (assign) BOOL displaysOnLockscreen;                                  //@synthesize displaysOnLockscreen=_displaysOnLockscreen - In the implementation block
@property (assign) BOOL noDefaultButton;                                       //@synthesize noDefaultButton=_noDefaultButton - In the implementation block
@property (assign) long long kind;                                             //@synthesize kind=_kind - In the implementation block
@property (copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (copy) NSString * displayCountKey; 
@property (assign) long long maximumDisplayCount; 
@property (readonly) SSPaymentSheet * paymentSheet;                            //@synthesize paymentSheet=_paymentSheet - In the implementation block
@property (getter=isDisplayable,readonly) BOOL displayable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ITunesStoreNotAvailableDialog;
+(long long)displayCountForKey:(id)arg1 ;
+(CFStringRef)buttonTitleKeyForCFUserNotificationButtonTag:(unsigned long long)arg1 ;
+(unsigned long long)buttonTagForCFUserNotificationButtonTitleKey:(CFStringRef)arg1 ;
+(void)_initializeStaticButtonTitleKeyAndTagMapping;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)message;
-(id)initWithDialogDictionary:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(BOOL)expectsResponse;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(id)init;
-(NSArray *)buttons;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTouchIDContinueToken:(NSString *)arg1 ;
-(SSPaymentSheet *)paymentSheet;
-(long long)kind;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setKind:(long long)arg1 ;
-(BOOL)allowDuplicates;
-(void)setAllowDuplicates:(BOOL)arg1 ;
-(BOOL)dismissOnLock;
-(long long)unlockActionButtonIndex;
-(BOOL)displaysOnLockscreen;
-(BOOL)dismissOnHomeButton;
-(BOOL)shouldDisplayAsTopMost;
-(BOOL)shouldDismissAfterUnlock;
-(BOOL)shouldPendInSetupIfNotAllowed;
-(void)setDismissOnHomeButton:(BOOL)arg1 ;
-(void)setDismissOnLock:(BOOL)arg1 ;
-(void)setShouldDismissAfterUnlock:(BOOL)arg1 ;
-(void)setShouldDisplayAsTopMost:(BOOL)arg1 ;
-(void)setShouldPendInSetupIfNotAllowed:(BOOL)arg1 ;
-(void)setDisplaysOnLockscreen:(BOOL)arg1 ;
-(void)setUnlockActionButtonIndex:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(BOOL)groupsTextFields;
-(BOOL)isDisplayable;
-(void)setGroupsTextFields:(BOOL)arg1 ;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(long long)defaultButtonIndex;
-(NSArray *)textFields;
-(id)buyParams;
-(NSString *)touchIDContinueToken;
-(void)setButtons:(NSArray *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setTextFields:(NSArray *)arg1 ;
-(void)incrementDisplayCount;
-(id)orderedButtonTitleKeysForCFUserNotification;
-(BOOL)noDefaultButton;
-(id)copyUserNotification;
-(id)initWithAuthenticationChallege:(id)arg1 ;
-(id)initWithDialogDictionary:(id)arg1 authenticationContext:(id)arg2 ;
-(void)setValue:(void*)arg1 forCFUserNotificationKey:(CFStringRef)arg2 ;
-(void)setAuthorizationIsForced:(BOOL)arg1 ;
-(long long)_kindForString:(id)arg1 ;
-(id)initWithOfferDeviceError:(id)arg1 ;
-(void*)copyValueForCFUserNotificationKey:(CFStringRef)arg1 ;
-(NSString *)displayCountKey;
-(long long)maximumDisplayCount;
-(void)setButtonsWithTitles:(id)arg1 ;
-(void)setDisplayCountKey:(NSString *)arg1 ;
-(void)setMaximumDisplayCount:(long long)arg1 ;
-(void)setValue:(id)arg1 forUserInfoKey:(id)arg2 ;
-(id)valueForUserInfoKey:(id)arg1 ;
-(BOOL)authorizationIsForced;
-(void)setNoDefaultButton:(BOOL)arg1 ;
-(BOOL)oneButtonPerLine;
-(void)setOneButtonPerLine:(BOOL)arg1 ;
@end

