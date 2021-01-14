/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionItemInternal.h>
#import <libobjc.A.dylib/AVTDiscardableContent.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionItemPrefetching.h>
#import <libobjc.A.dylib/AVTAvatarUpdating.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionItem.h>

@class NSString, UIImage;

@interface AVTAvatarAttributeEditorSectionItem : NSObject <AVTAvatarAttributeEditorSectionItemInternal, AVTDiscardableContent, AVTAvatarAttributeEditorSectionItemPrefetching, AVTAvatarUpdating, AVTAvatarAttributeEditorSectionItem> {

	BOOL _selected;
	NSString* _identifier;
	NSString* _localizedName;
	/*^block*/id _avatarUpdater;
	/*^block*/id _thumbnailProvider;
	/*^block*/id _presetResourcesProvider;
	/*^block*/id discardableContentHandler;
	UIImage* _cachedThumbnail;
	double _heightRatio;

}

@property (nonatomic,retain) UIImage * cachedThumbnail;                            //@synthesize cachedThumbnail=_cachedThumbnail - In the implementation block
@property (nonatomic,readonly) double heightRatio;                                 //@synthesize heightRatio=_heightRatio - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                      //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) id avatarUpdater;                              //@synthesize avatarUpdater=_avatarUpdater - In the implementation block
@property (nonatomic,copy) id discardableContentHandler; 
@property (nonatomic,copy,readonly) NSString * prefetchingIdentifier; 
@property (nonatomic,copy,readonly) id thumbnailProvider;                          //@synthesize thumbnailProvider=_thumbnailProvider - In the implementation block
@property (nonatomic,copy,readonly) id presetResourcesProvider;                    //@synthesize presetResourcesProvider=_presetResourcesProvider - In the implementation block
-(NSString *)localizedName;
-(id)presetResourcesProvider;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(NSString *)description;
-(id)avatarUpdater;
-(id)thumbnailProvider;
-(id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 thumbnailProvider:(/*^block*/id)arg3 presetResourcesProvider:(/*^block*/id)arg4 avatarUpdater:(/*^block*/id)arg5 heightRatio:(double)arg6 selected:(BOOL)arg7 ;
-(NSString *)prefetchingIdentifier;
-(NSString *)identifier;
-(double)heightRatio;
-(void)setCachedThumbnail:(UIImage *)arg1 ;
-(UIImage *)cachedThumbnail;
@end

