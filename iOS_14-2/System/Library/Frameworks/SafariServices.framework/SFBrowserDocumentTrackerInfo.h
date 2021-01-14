/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFBrowserDocument;
@class NSDate, NSSet;

@interface SFBrowserDocumentTrackerInfo : NSObject {

	BOOL _cachedTrackingPreventionEnabled;
	NSDate* _lastNavigationCommitDate;
	id<_SFBrowserDocument> _document;
	NSSet* _allowedKnownTrackingThirdParties;
	NSSet* _preventedKnownTrackingThirdParties;

}

@property (nonatomic,__weak,readonly) id<_SFBrowserDocument> document;                  //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSSet * allowedKnownTrackingThirdParties;                //@synthesize allowedKnownTrackingThirdParties=_allowedKnownTrackingThirdParties - In the implementation block
@property (nonatomic,readonly) NSSet * preventedKnownTrackingThirdParties;              //@synthesize preventedKnownTrackingThirdParties=_preventedKnownTrackingThirdParties - In the implementation block
+(BOOL)trackingPreventionEnabled;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSSet *)preventedKnownTrackingThirdParties;
-(void)updateKnownTrackingThirdPartiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)_resetKnownTrackingThirdParties;
-(id<_SFBrowserDocument>)document;
-(void)_flushKnownTrackingThirdParties;
-(void)_updateKnownTrackingThirdPartiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)documentDidCommitNavigation;
-(NSSet *)allowedKnownTrackingThirdParties;
-(void)dealloc;
@end

