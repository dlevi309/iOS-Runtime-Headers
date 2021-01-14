/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UINavigationController.h>

@protocol CNPostalAddressEditorDelegate;
@interface CNPostalAddressEditorNavigationController : UINavigationController {

	id<CNPostalAddressEditorDelegate> _addressEditorDelegate;

}

@property (assign,nonatomic,__weak) id<CNPostalAddressEditorDelegate> addressEditorDelegate;              //@synthesize addressEditorDelegate=_addressEditorDelegate - In the implementation block
-(void)setTitle:(id)arg1 ;
-(id)initWithPropertyKey:(id)arg1 label:(id)arg2 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 addressDictionary:(id)arg3 label:(id)arg4 ;
-(void)doneWithContact:(id)arg1 propertyKey:(id)arg2 ;
-(id<CNPostalAddressEditorDelegate>)addressEditorDelegate;
-(void)setAddressEditorDelegate:(id<CNPostalAddressEditorDelegate>)arg1 ;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(BOOL)arg3 ;
@end

