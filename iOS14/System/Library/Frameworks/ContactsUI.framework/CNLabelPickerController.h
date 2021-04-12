/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPickerController.h>

@class CNPropertyGroupItem, NSMutableArray;

@interface CNLabelPickerController : CNPickerController {

	CNPropertyGroupItem* _item;
	NSMutableArray* _labelsToDeleteOnCommit;

}

@property (retain) NSMutableArray * labelsToDeleteOnCommit;                    //@synthesize labelsToDeleteOnCommit=_labelsToDeleteOnCommit - In the implementation block
@property (nonatomic,__weak,readonly) CNPropertyGroupItem * item;              //@synthesize item=_item - In the implementation block
-(CNPropertyGroupItem *)item;
-(id)titleForPickerItem:(id)arg1 ;
-(id)initForPropertyItem:(id)arg1 ;
-(void)removeCustomItem:(id)arg1 ;
-(void)pickedItem:(id)arg1 ;
-(NSMutableArray *)labelsToDeleteOnCommit;
-(void)setLabelsToDeleteOnCommit:(NSMutableArray *)arg1 ;
@end

