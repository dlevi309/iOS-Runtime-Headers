/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WBSTranslationContextSnapshotStoring.h>
#import <libobjc.A.dylib/WKObject.h>

@class WBSTranslationContextSnapshot, _SFQuickLookDocument, _SFSecurityInfo, NSString, NSURL;

@interface WKBackForwardListItem : NSObject <WBSTranslationContextSnapshotStoring, WKObject> {

	ObjectStorage<WebKit::WebBackForwardListItem> _item;

}

@property (setter=_sf_setQuickLookDocument:,nonatomic,retain) _SFQuickLookDocument * _sf_quickLookDocument; 
@property (setter=_sf_setSecurityInfo:,nonatomic,retain) _SFSecurityInfo * _sf_securityInfo; 
@property (setter=_sf_setExplicitSuggestedFilename:,nonatomic,retain) NSString * _sf_explicitSuggestedFilename; 
@property (setter=_safari_setTranslationContextSnapshot:,nonatomic,retain) WBSTranslationContextSnapshot * _safari_translationContextSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) WebBackForwardListItem* _item; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * title; 
@property (copy,readonly) NSURL * initialURL; 
@property (readonly) Object* _apiObject; 
-(_SFQuickLookDocument *)_sf_quickLookDocument;
-(void)_sf_setQuickLookDocument:(id)arg1 ;
-(_SFSecurityInfo *)_sf_securityInfo;
-(void)_sf_setSecurityInfo:(id)arg1 ;
-(NSString *)_sf_explicitSuggestedFilename;
-(void)_sf_setExplicitSuggestedFilename:(id)arg1 ;
-(WBSTranslationContextSnapshot *)_safari_translationContextSnapshot;
-(void)_safari_setTranslationContextSnapshot:(id)arg1 ;
-(WebBackForwardListItem*)_item;
-(NSURL *)URL;
-(CGPoint)_scrollPosition;
-(Object*)_apiObject;
-(NSURL *)initialURL;
-(CGImageRef)_copySnapshotForTesting;
-(NSString *)title;
-(void)dealloc;
@end

