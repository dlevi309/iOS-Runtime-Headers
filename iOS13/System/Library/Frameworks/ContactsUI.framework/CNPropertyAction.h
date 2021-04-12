/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactAction.h>

@class NSArray, CNPropertyGroupItem;

@interface CNPropertyAction : CNContactAction {

	NSArray* _propertyItems;

}

@property (assign,nonatomic,__weak) id<CNPropertyActionDelegate> delegate; 
@property (nonatomic,copy) NSArray * propertyItems;                                     //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,readonly) CNPropertyGroupItem * propertyItem; 
+(void)performDefaultActionForItem:(id)arg1 sender:(id)arg2 ;
-(id)initWithContact:(id)arg1 ;
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(NSArray *)propertyItems;
-(CNPropertyGroupItem *)propertyItem;
-(id)initWithContact:(id)arg1 propertyItem:(id)arg2 ;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(void)presentDisambiguationAlertWithSender:(id)arg1 ;
@end

