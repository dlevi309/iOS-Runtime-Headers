/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorHeaderPickerItem.h>
@class NSString;


@protocol AVTAvatarAttributeEditorHeaderPickerItem <NSObject>
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) id avatarUpdater; 
@property (nonatomic,copy,readonly) id editorUpdater; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@required
-(NSString *)localizedName;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1;
-(id)avatarUpdater;
-(id)editorUpdater;

@end


@class NSString;

@interface AVTAvatarAttributeEditorHeaderPickerItem : NSObject <AVTAvatarAttributeEditorHeaderPickerItem> {

	BOOL _selected;
	NSString* _localizedName;
	/*^block*/id _avatarUpdater;
	/*^block*/id _editorUpdater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) id avatarUpdater;                      //@synthesize avatarUpdater=_avatarUpdater - In the implementation block
@property (nonatomic,copy,readonly) id editorUpdater;                      //@synthesize editorUpdater=_editorUpdater - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
-(NSString *)localizedName;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(id)avatarUpdater;
-(id)editorUpdater;
-(id)initWithLocalizedName:(id)arg1 avatarUpdater:(/*^block*/id)arg2 editorUpdater:(/*^block*/id)arg3 selected:(BOOL)arg4 ;
@end

