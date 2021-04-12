/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


@protocol WGWidgetVisibilityDelegate;
#import <Widgets/Widgets-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface WGWidgetVisibilityManager : NSObject {

	NSMutableDictionary* _widgetTagsByIdentifier;
	NSMutableDictionary* _extensionHashByIdentifier;
	NSMutableDictionary* _mobileGestaltAnswerByWidgetTag;
	NSMutableDictionary* _visibilityDefaultValueByIdentifier;
	NSMutableDictionary* _visibilityPreferenceByIdentifier;
	NSMutableSet* _visibilityOverridenIdentifiers;
	NSMutableSet* _mobileGestaltQuestions;
	MGNotificationTokenStructRef _mobileGestaltNotificationToken;
	BOOL _delegateRespondsToWidgetVisibilityDidChange;
	id<WGWidgetVisibilityDelegate> _delegate;

}

@property (getter=_mobileGestaltAnswerByWidgetTag,nonatomic,retain) NSMutableDictionary * mobileGestaltAnswerByWidgetTag;              //@synthesize mobileGestaltAnswerByWidgetTag=_mobileGestaltAnswerByWidgetTag - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetVisibilityDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<WGWidgetVisibilityDelegate>)delegate;
-(void)setDelegate:(id<WGWidgetVisibilityDelegate>)arg1 ;
-(void)_registerForVisiblityPreferenceChanges;
-(void)_unregisterForVisiblityPreferenceChanges;
-(void)_updateWidgetTagsAndVisibilityForExtensions:(id)arg1 ;
-(void)_updateMobileGestaltQuestions;
-(void)_updateWidgetTagsAndIconVisibilityForExtension:(id)arg1 ;
-(id)_widgetTagsForWidgetExtensionInfoDictionary:(id)arg1 ;
-(BOOL)_updateWidgetVisibilityPreference:(id)arg1 ;
-(id)_allWidgetTags;
-(id)_mobileGestaltAnswerByWidgetTag;
-(void)_widgetVisibilityChanged;
-(BOOL)_updateWidgetVisibilityPreferences;
-(BOOL)isWidgetWithIdentifierVisible:(id)arg1 ;
-(void)updateVisibilityForExtensions:(id)arg1 ;
-(void)_widgetVisibilityPreferencesChanged;
-(void)setMobileGestaltAnswerByWidgetTag:(NSMutableDictionary *)arg1 ;
@end

