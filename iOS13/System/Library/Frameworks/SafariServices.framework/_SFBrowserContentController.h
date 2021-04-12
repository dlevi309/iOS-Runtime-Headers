/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class _SFPerSitePreferencesVendor, _SFPageZoomPreferenceManager;


@protocol _SFBrowserContentController <NSObject>
@property (nonatomic,readonly) id<_SFBrowserDocument> activeDocument; 
@property (getter=isShowingReader,nonatomic,readonly) BOOL showingReader; 
@property (assign,nonatomic) BOOL keepBarsMinimized; 
@property (nonatomic,readonly) _SFPerSitePreferencesVendor * perSitePreferencesVendor; 
@property (nonatomic,readonly) _SFPageZoomPreferenceManager * pageZoomManager; 
@required
-(id<_SFBrowserDocument>)activeDocument;
-(BOOL)isShowingReader;
-(void)toggleShowingReaderForUserAction;
-(void)setKeepBarsMinimized:(BOOL)arg1;
-(_SFPageZoomPreferenceManager *)pageZoomManager;
-(_SFPerSitePreferencesVendor *)perSitePreferencesVendor;
-(BOOL)keepBarsMinimized;

@end

