/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSString, NSURL, NSArray;

@interface MSVSystemDialogOptions : NSObject {

	BOOL _showAsTopmost;
	BOOL _forceModalAlertAppearance;
	BOOL _showOnLockscreen;
	BOOL _dismissOverlaysOnLockscreen;
	NSString* _alertHeader;
	NSString* _alertMessage;
	NSURL* _alertIconURL;
	NSArray* _allowedApplicationBundleIDs;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;

}

@property (nonatomic,copy) NSString * alertHeader;                             //@synthesize alertHeader=_alertHeader - In the implementation block
@property (nonatomic,copy) NSString * alertMessage;                            //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,copy) NSURL * alertIconURL;                               //@synthesize alertIconURL=_alertIconURL - In the implementation block
@property (nonatomic,copy) NSArray * allowedApplicationBundleIDs;              //@synthesize allowedApplicationBundleIDs=_allowedApplicationBundleIDs - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonTitle;                      //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * alternateButtonTitle;                    //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL showAsTopmost;                               //@synthesize showAsTopmost=_showAsTopmost - In the implementation block
@property (assign,nonatomic) BOOL forceModalAlertAppearance;                   //@synthesize forceModalAlertAppearance=_forceModalAlertAppearance - In the implementation block
@property (assign,nonatomic) BOOL showOnLockscreen;                            //@synthesize showOnLockscreen=_showOnLockscreen - In the implementation block
@property (assign,nonatomic) BOOL dismissOverlaysOnLockscreen;                 //@synthesize dismissOverlaysOnLockscreen=_dismissOverlaysOnLockscreen - In the implementation block
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(void)setAlertMessage:(NSString *)arg1 ;
-(BOOL)showAsTopmost;
-(NSString *)alternateButtonTitle;
-(NSURL *)alertIconURL;
-(BOOL)forceModalAlertAppearance;
-(BOOL)showOnLockscreen;
-(BOOL)dismissOverlaysOnLockscreen;
-(NSArray *)allowedApplicationBundleIDs;
-(void)setAlertIconURL:(NSURL *)arg1 ;
-(void)setAllowedApplicationBundleIDs:(NSArray *)arg1 ;
-(void)setShowAsTopmost:(BOOL)arg1 ;
-(void)setForceModalAlertAppearance:(BOOL)arg1 ;
-(void)setShowOnLockscreen:(BOOL)arg1 ;
-(void)setDismissOverlaysOnLockscreen:(BOOL)arg1 ;
-(NSString *)defaultButtonTitle;
-(void)setAlertHeader:(NSString *)arg1 ;
-(NSString *)alertMessage;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(NSString *)alertHeader;
@end

