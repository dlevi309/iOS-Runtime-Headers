/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKApplicationDelegate.h>

@protocol TSADownloadDelegate;
@class NSString, NSArray;

@interface TSABaseApplicationDelegate : TSKApplicationDelegate {

	id<TSADownloadDelegate> _downloadDelegate;

}

@property (nonatomic,readonly) NSString * nativeDocumentType; 
@property (nonatomic,readonly) NSString * nativeDocumentExtension; 
@property (nonatomic,readonly) NSString * templateDocumentType; 
@property (nonatomic,readonly) NSString * templateSFFDocumentType; 
@property (nonatomic,readonly) NSString * templateDocumentExtension; 
@property (nonatomic,readonly) NSString * tangierEditingFormatDocumentType; 
@property (nonatomic,readonly) NSString * nativeSFFDocumentType; 
@property (nonatomic,readonly) NSArray * readableDocumentTypes; 
@property (nonatomic,readonly) NSArray * importableDocumentTypes; 
@property (nonatomic,readonly) NSArray * applicationTemplateVariants; 
@property (nonatomic,retain) id<TSADownloadDelegate> downloadDelegate;                   //@synthesize downloadDelegate=_downloadDelegate - In the implementation block
+(id)sharedDelegate;
+(void)resetSharedConfigurations;
+(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(id<TSADownloadDelegate>)downloadDelegate;
-(void)setDownloadDelegate:(id<TSADownloadDelegate>)arg1 ;
-(BOOL)openURL:(id)arg1 sourceDocumentRoot:(id)arg2 ;
-(id)invalidURLSchemes;
-(id)validURLSchemes;
-(void)persistenceError:(id)arg1 ;
-(void)registerDefaults;
-(NSString *)nativeDocumentType;
-(NSString *)templateDocumentType;
-(NSString *)templateSFFDocumentType;
-(NSString *)tangierEditingFormatDocumentType;
-(NSString *)nativeSFFDocumentType;
-(NSArray *)importableDocumentTypes;
-(NSArray *)readableDocumentTypes;
-(id)applicationTemplateVariantsForLocale:(CFLocaleRef)arg1 ;
-(Class)documentRootClass;
-(NSString *)nativeDocumentExtension;
-(NSString *)templateDocumentExtension;
-(BOOL)isReadableDocumentType:(id)arg1 ;
-(NSArray *)applicationTemplateVariants;
-(double)mimimumAspectRatioForPreviewImage;
-(double)maximumAspectRatioForPreviewImage;
-(BOOL)URLIsValidForImportedHyperlink:(id)arg1 ;
-(id)existingNestedDocumentPathForPath:(id)arg1 ;
@end

