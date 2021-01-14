/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/SXDocumentSectionItemProvider.h>

@protocol NUDocumentSectionItemHeightProvider;
@class UIViewController, UITraitCollection, NSString;

@interface NUDocumentSectionItem : NSObject <SXDocumentSectionItemProvider> {

	UIViewController* _viewController;
	UITraitCollection* _traitCollection;
	id<NUDocumentSectionItemHeightProvider> _heightProvider;

}

@property (readonly) UIViewController * viewController;                                   //@synthesize viewController=_viewController - In the implementation block
@property (readonly) UITraitCollection * traitCollection;                                 //@synthesize traitCollection=_traitCollection - In the implementation block
@property (readonly) id<NUDocumentSectionItemHeightProvider> heightProvider;              //@synthesize heightProvider=_heightProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITraitCollection *)traitCollection;
-(UIViewController *)viewController;
-(id<NUDocumentSectionItemHeightProvider>)heightProvider;
-(double)sectionItemHeightForSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(id)sectionItemViewController;
-(id)initWithViewController:(id)arg1 heightProvider:(id)arg2 ;
@end

