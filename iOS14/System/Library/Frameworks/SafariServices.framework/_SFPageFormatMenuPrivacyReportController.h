/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/_SFPageFormatMenuItemController.h>

@protocol _SFPageFormatMenuItemControllerDelegate, _SFBrowserDocument;
@class _SFSettingsAlertItem, MCProfileConnection, UIViewController, NSString;

@interface _SFPageFormatMenuPrivacyReportController : NSObject <MCProfileConnectionObserver, _SFPageFormatMenuItemController> {

	MCProfileConnection* _profileConnection;
	UIViewController* _enableTrackerProtectionViewController;
	id<_SFPageFormatMenuItemControllerDelegate> _delegate;
	id<_SFBrowserDocument> _document;

}

@property (nonatomic,readonly) id<_SFBrowserDocument> document;                                        //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _SFSettingsAlertItem * alertItem; 
@property (assign,nonatomic,__weak) id<_SFPageFormatMenuItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(_SFSettingsAlertItem *)alertItem;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_presentPrivacyReport;
-(id<_SFPageFormatMenuItemControllerDelegate>)delegate;
-(void)_presentPromptToEnableTrackerProtection;
-(void)_enableTrackerProtection;
-(void)_initializeManagedProfileConnection;
-(void)_dismissPromptIfTrackerProtectionEnabled;
-(void)setDelegate:(id<_SFPageFormatMenuItemControllerDelegate>)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(id<_SFBrowserDocument>)document;
-(void)dealloc;
@end

