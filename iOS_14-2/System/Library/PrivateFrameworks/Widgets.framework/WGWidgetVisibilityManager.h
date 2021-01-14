/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<WGWidgetVisibilityDelegate>)delegate;
-(void)_widgetVisibilityPreferencesChanged;
-(void)setMobileGestaltAnswerByWidgetTag:(NSMutableDictionary *)arg1 ;
-(BOOL)_updateWidgetVisibilityPreference:(id)arg1 ;
-(void)_registerForVisiblityPreferenceChanges;
-(BOOL)_updateWidgetVisibilityPreferences;
-(void)setDelegate:(id<WGWidgetVisibilityDelegate>)arg1 ;
-(BOOL)isWidgetWithIdentifierVisible:(id)arg1 ;
-(void)_updateWidgetTagsAndVisibilityForExtensions:(id)arg1 ;
-(void)_updateWidgetTagsAndIconVisibilityForExtension:(id)arg1 ;
-(id)_widgetTagsForWidgetExtensionInfoDictionary:(id)arg1 ;
-(void)updateVisibilityForExtensions:(id)arg1 ;
-(id)_allWidgetTags;
-(void)_updateMobileGestaltQuestions;
-(id)_mobileGestaltAnswerByWidgetTag;
-(void)_unregisterForVisiblityPreferenceChanges;
-(void)_widgetVisibilityChanged;
-(void)dealloc;
@end

