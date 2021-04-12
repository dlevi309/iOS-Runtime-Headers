/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/


#import <Widgets/Widgets-Structs.h>
@class NSPointerArray, NSString, NSExtension, UIImage;

@interface WGWidgetInfo : NSObject {

	NSPointerArray* _registeredWidgetHosts;
	struct {
		unsigned didInitializeWantsVisibleFrame : 1;
	}  _widgetInfoFlags;
	BOOL _wantsVisibleFrame;
	NSString* _sdkVersion;
	NSExtension* _extension;
	long long _initialDisplayMode;
	long long _largestAllowedDisplayMode;
	UIImage* _icon;
	UIImage* _outlineIcon;
	NSString* _displayName;
	CGSize _preferredContentSize;

}

@property (setter=_setIcon:,getter=_icon,nonatomic,retain) UIImage * icon;                                           //@synthesize icon=_icon - In the implementation block
@property (setter=_setOutlineIcon:,getter=_outlineIcon,nonatomic,retain) UIImage * outlineIcon;                      //@synthesize outlineIcon=_outlineIcon - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                                            //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (setter=_setDisplayName:,nonatomic,copy) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (getter=_sdkVersion,nonatomic,copy,readonly) NSString * sdkVersion;                                        //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (assign,setter=_setLargestAllowedDisplayMode:,nonatomic) long long largestAllowedDisplayMode;              //@synthesize largestAllowedDisplayMode=_largestAllowedDisplayMode - In the implementation block
@property (assign,setter=_setWantsVisibleFrame:,nonatomic) BOOL wantsVisibleFrame;                                   //@synthesize wantsVisibleFrame=_wantsVisibleFrame - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                                                              //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetIdentifier; 
@property (nonatomic,readonly) double initialHeight; 
@property (nonatomic,readonly) long long initialDisplayMode;                                                         //@synthesize initialDisplayMode=_initialDisplayMode - In the implementation block
+(double)maximumContentHeightForCompactDisplayMode;
+(id)widgetInfoWithExtension:(id)arg1 ;
+(id)_productVersion;
+(void)_updateRowHeightForContentSizeCategory;
-(id)_icon;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(NSString *)widgetIdentifier;
-(void)_setDisplayName:(id)arg1 ;
-(void)_setLargestAllowedDisplayMode:(long long)arg1 ;
-(void)_resetIcons;
-(long long)initialDisplayMode;
-(void)_requestIcon:(BOOL)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)widgetInfoWithExtension:(id)arg1 ;
-(void)_resetIconsImpl;
-(id)initWithExtension:(id)arg1 ;
-(id)_sdkVersion;
-(CGSize)preferredContentSize;
-(void)registerWidgetHost:(id)arg1 ;
-(BOOL)isLinkedOnOrAfterSystemVersion:(id)arg1 ;
-(void)_setOutlineIcon:(id)arg1 ;
-(void)requestSettingsIconWithHandler:(/*^block*/id)arg1 ;
-(void)_setWantsVisibleFrame:(BOOL)arg1 ;
-(NSExtension *)extension;
-(id)_outlineIcon;
-(double)initialHeight;
-(void)_setIcon:(id)arg1 ;
-(long long)largestAllowedDisplayMode;
-(id)_queue_iconFromWidgetBundleForWidgetWithIdentifier:(id)arg1 extension:(id)arg2 ;
-(id)_queue_iconWithSize:(CGSize)arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4 ;
-(void)updatePreferredContentSize:(CGSize)arg1 forWidgetHost:(id)arg2 ;
-(NSString *)displayName;
-(void)requestIconWithHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsVisibleFrame;
-(id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2 ;
@end

