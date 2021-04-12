/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKit/UIActivityViewControllerObjectManipulationDelegate.h>

@protocol _SFActivityItemCustomizationDelegate;
@class NSString;

@interface _SFActivityItemCustomizationController : NSObject <UIActivityViewControllerObjectManipulationDelegate> {

	BOOL _contentTypeAllowedMap[5];
	id<_SFActivityItemCustomizationDelegate> _delegate;
	long long _selectedContentType;

}

@property (assign,nonatomic,__weak) id<_SFActivityItemCustomizationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long selectedContentType;                                       //@synthesize selectedContentType=_selectedContentType - In the implementation block
@property (nonatomic,readonly) BOOL canShareAsLink; 
@property (nonatomic,readonly) BOOL canPrint; 
@property (nonatomic,readonly) BOOL canShareAsDownload; 
@property (nonatomic,readonly) BOOL canShareAsWebArchive; 
@property (nonatomic,readonly) BOOL canShareAsStandaloneImage; 
@property (nonatomic,readonly) BOOL canShareAsPDF; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_SFActivityItemCustomizationDelegate>)delegate;
-(BOOL)canPrint;
-(long long)_contentTypeForAllowedContentAtIndex:(long long)arg1 ;
-(void)_customizationsDidChange;
-(void)_ensureSelectedContentTypeIsAllowed;
-(void)setDelegate:(id<_SFActivityItemCustomizationDelegate>)arg1 ;
-(long long)_selectedIndex;
-(id)_allowedContentTypes;
-(BOOL)canShareAsLink;
-(BOOL)canShareAsStandaloneImage;
-(BOOL)canShareAsPDF;
-(BOOL)canShareAsDownload;
-(BOOL)canShareAsWebArchive;
-(id)_customizationGroupsForActivityViewController:(id)arg1 ;
-(long long)selectedContentType;
@end

