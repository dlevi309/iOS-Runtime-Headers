/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionSupplementalPickerItemInternal.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionSupplementalPickerItem.h>
@class NSString;


@protocol AVTAvatarAttributeEditorSectionSupplementalPickerItem <NSObject>
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (nonatomic,copy,readonly) id editorUpdater; 
@required
-(NSString *)localizedName;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1;
-(NSString *)localizedDescription;
-(id)editorUpdater;

@end


@class NSString;

@interface AVTAvatarAttributeEditorSectionSupplementalPickerItem : NSObject <AVTAvatarAttributeEditorSectionSupplementalPickerItemInternal, AVTAvatarAttributeEditorSectionSupplementalPickerItem> {

	BOOL _selected;
	NSString* _localizedName;
	/*^block*/id _avatarUpdater;
	/*^block*/id _editorUpdater;
	NSString* _localizedDescription;

}

@property (nonatomic,copy,readonly) id avatarUpdater;                             //@synthesize avatarUpdater=_avatarUpdater - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                     //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy,readonly) id editorUpdater;                             //@synthesize editorUpdater=_editorUpdater - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localizedName;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)localizedDescription;
-(id)avatarUpdater;
-(id)editorUpdater;
-(id)initWithLocalizedName:(id)arg1 localizedDescription:(id)arg2 avatarUpdater:(/*^block*/id)arg3 editorUpdater:(/*^block*/id)arg4 selected:(BOOL)arg5 ;
@end

