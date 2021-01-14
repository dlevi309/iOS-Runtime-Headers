/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class UITextField, NSString, UIFont, NSMutableArray, UIImageView, PHPerson;

@interface PXPeopleNamePickerTitleView : UIView <PXPhotoLibraryUIChangeObserver> {

	UITextField* _nameField;
	NSString* _localizedName;
	UIFont* _nameFont;
	NSString* _placeholder;
	UIFont* _placeholderFont;
	NSMutableArray* _fetchResults;
	UIImageView* _avatarView;
	PHPerson* _person;

}

@property (nonatomic,retain) NSMutableArray * fetchResults;              //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) UIImageView * avatarView;                   //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) PHPerson * person;                          //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) UITextField * nameField;                  //@synthesize nameField=_nameField - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) UIFont * nameFont;                          //@synthesize nameFont=_nameFont - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                       //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) UIFont * placeholderFont;                   //@synthesize placeholderFont=_placeholderFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHPerson *)person;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(NSMutableArray *)fetchResults;
-(id)initWithFrame:(CGRect)arg1 ;
-(UITextField *)nameField;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIImageView *)avatarView;
-(id)initWithFrame:(CGRect)arg1 person:(id)arg2 ;
-(void)finishEditing;
-(void)resetImages;
-(void)setPlaceholderFont:(UIFont *)arg1 ;
-(void)_updateFieldText;
-(void)_updateFieldPlaceholder;
-(UIFont *)placeholderFont;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(NSString *)placeholder;
-(id)initWithCoder:(id)arg1 ;
-(void)setAvatarView:(UIImageView *)arg1 ;
-(void)setPerson:(PHPerson *)arg1 ;
-(void)setNameFont:(UIFont *)arg1 ;
-(void)setFetchResults:(NSMutableArray *)arg1 ;
-(UIFont *)nameFont;
-(void)dealloc;
@end

