/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(NSArray *)propertyItems;
-(id)initWithContact:(id)arg1 ;
-(CNPropertyGroupItem *)propertyItem;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(id)initWithContact:(id)arg1 propertyItem:(id)arg2 ;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(void)presentDisambiguationAlertWithSender:(id)arg1 ;
@end

