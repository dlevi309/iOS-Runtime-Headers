/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNUIFavoritesEntryPickerDelegate.h>

@class CNUIFavoritesEntryPicker, CNFavorites, NSString;

@interface CNContactAddFavoriteAction : CNPropertyAction <CNUIFavoritesEntryPickerDelegate> {

	CNUIFavoritesEntryPicker* _favoritesEntryPicker;
	CNFavorites* _favorites;

}

@property (nonatomic,retain) CNUIFavoritesEntryPicker * favoritesEntryPicker;              //@synthesize favoritesEntryPicker=_favoritesEntryPicker - In the implementation block
@property (nonatomic,readonly) CNFavorites * favorites;                                    //@synthesize favorites=_favorites - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(CNFavorites *)favorites;
-(void)_saveFavorite:(id)arg1 ;
-(void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2 ;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 favorites:(id)arg3 ;
-(CNUIFavoritesEntryPicker *)favoritesEntryPicker;
-(void)setFavoritesEntryPicker:(CNUIFavoritesEntryPicker *)arg1 ;
@end

