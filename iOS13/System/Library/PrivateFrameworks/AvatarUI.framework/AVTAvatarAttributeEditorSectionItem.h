/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionItem.h>
#import <libobjc.A.dylib/AVTDiscardableContent.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionItemPrefetching.h>

@class NSString, UIImage;

@interface AVTAvatarAttributeEditorSectionItem : NSObject <AVTAvatarAttributeEditorSectionItem, AVTDiscardableContent, AVTAvatarAttributeEditorSectionItemPrefetching> {

	BOOL _selected;
	NSString* _localizedName;
	/*^block*/id _avatarUpdater;
	/*^block*/id discardableContentHandler;
	NSString* _identifier;
	UIImage* _cachedThumbnail;
	double _heightRatio;
	/*^block*/id _thumbnailProvider;
	/*^block*/id _presetResourcesProvider;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIImage * cachedThumbnail;                            //@synthesize cachedThumbnail=_cachedThumbnail - In the implementation block
@property (nonatomic,readonly) double heightRatio;                                 //@synthesize heightRatio=_heightRatio - In the implementation block
@property (nonatomic,copy,readonly) id thumbnailProvider;                          //@synthesize thumbnailProvider=_thumbnailProvider - In the implementation block
@property (nonatomic,copy,readonly) id presetResourcesProvider;                    //@synthesize presetResourcesProvider=_presetResourcesProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) id avatarUpdater;                              //@synthesize avatarUpdater=_avatarUpdater - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                      //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy) id discardableContentHandler; 
@property (nonatomic,copy,readonly) NSString * prefetchingIdentifier; 
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)localizedName;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(id)thumbnailProvider;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(id)avatarUpdater;
-(double)heightRatio;
-(void)setCachedThumbnail:(UIImage *)arg1 ;
-(UIImage *)cachedThumbnail;
-(id)presetResourcesProvider;
-(id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 thumbnailProvider:(/*^block*/id)arg3 presetResourcesProvider:(/*^block*/id)arg4 avatarUpdater:(/*^block*/id)arg5 heightRatio:(double)arg6 selected:(BOOL)arg7 ;
-(NSString *)prefetchingIdentifier;
@end

