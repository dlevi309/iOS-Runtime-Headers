/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <DocumentManager/UIDocumentBrowserActionDescriptor.h>

@interface FPUIAction : UIDocumentBrowserActionDescriptor {

	BOOL _isNonUIAction;

}

@property (nonatomic,readonly) BOOL isNonUIAction;              //@synthesize isNonUIAction=_isNonUIAction - In the implementation block
-(id)initWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 fileProviderIdentifier:(id)arg3 displayName:(id)arg4 predicate:(id)arg5 displayInline:(BOOL)arg6 isNonUIAction:(BOOL)arg7 ;
-(BOOL)isNonUIAction;
@end

