/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFSettingsAlertOptionsGroupController.h>

@protocol OS_dispatch_queue, SFReaderContext;
@class NSArray, NSMutableDictionary, NSObject, NSString;

@interface _SFReaderFontOptionsGroupController : NSObject <_SFSettingsAlertOptionsGroupController> {

	double _fontSize;
	NSMutableDictionary* _fontToItemDictionary;
	NSObject*<OS_dispatch_queue> _fontInstallationStatusQueue;
	id<SFReaderContext> _readerContext;

}

@property (nonatomic,readonly) id<SFReaderContext> readerContext;              //@synthesize readerContext=_readerContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * values; 
-(NSArray *)values;
-(void)_fontDownloadDidBegin:(id)arg1 ;
-(void)_fontDownloadDidFail:(id)arg1 ;
-(void)_fontDownloadDidFinish:(id)arg1 ;
-(void)_fontDownloadProgressDidChange:(id)arg1 ;
-(BOOL)_fontIsImmediatelyAvailable:(id)arg1 ;
-(id)_attributedStringForReaderFont:(id)arg1 ;
-(id)_fontForFontNotification:(id)arg1 ;
-(id)_itemForNotification:(id)arg1 ;
-(id)_downloadAccessoryForNotification:(id)arg1 ;
-(void)prepareItem:(id)arg1 forValue:(id)arg2 ;
-(void)setSelectedValue:(id)arg1 ;
-(id)attributedStringForValue:(id)arg1 ;
-(id)textStyleForValue:(id)arg1 ;
-(BOOL)isSelectedValue:(id)arg1 ;
-(id)initWithReaderContext:(id)arg1 ;
-(id<SFReaderContext>)readerContext;
@end

