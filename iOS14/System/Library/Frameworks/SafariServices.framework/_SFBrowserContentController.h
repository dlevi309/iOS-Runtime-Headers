/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class _SFPerSitePreferencesVendor, _SFPageZoomPreferenceManager;


@protocol _SFBrowserContentController <NSObject>
@property (nonatomic,readonly) id<_SFBrowserDocument> activeDocument; 
@property (getter=isShowingReader,nonatomic,readonly) BOOL showingReader; 
@property (assign,nonatomic) BOOL keepBarsMinimized; 
@property (nonatomic,readonly) _SFPerSitePreferencesVendor * perSitePreferencesVendor; 
@property (nonatomic,readonly) _SFPageZoomPreferenceManager * pageZoomManager; 
@property (nonatomic,readonly) BOOL supportsPrivacyReport; 
@required
-(BOOL)isShowingReader;
-(BOOL)keepBarsMinimized;
-(id<_SFBrowserDocument>)activeDocument;
-(BOOL)supportsPrivacyReport;
-(void)toggleShowingReaderForUserAction;
-(void)setKeepBarsMinimized:(BOOL)arg1;
-(_SFPageZoomPreferenceManager *)pageZoomManager;
-(_SFPerSitePreferencesVendor *)perSitePreferencesVendor;

@end

