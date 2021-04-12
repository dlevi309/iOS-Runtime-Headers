/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKit/UIFocusItem.h>
#import <libobjc.A.dylib/PXGAXInfo.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class NSString, PXGBasicAXGroup, NSArray, UIView;

@interface PXGReusableAXInfo : NSObject <UIFocusItem, PXGAXInfo, PXReusableObject> {

	id _content;
	BOOL _allowDecorations;
	unsigned _spriteIndex;
	PXGBasicAXGroup* _axContainingGroup;
	long long _alternateUIVisibility;
	NSArray* _axDecorations;
	long long _axContentKind;
	SCD_Struct_PX106 _spriteGeometry;

}

@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long axContentKind;                                             //@synthesize axContentKind=_axContentKind - In the implementation block
@property (assign,nonatomic,__weak) PXGBasicAXGroup * axContainingGroup;                          //@synthesize axContainingGroup=_axContainingGroup - In the implementation block
@property (assign,nonatomic) unsigned spriteIndex;                                                //@synthesize spriteIndex=_spriteIndex - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX106 spriteGeometry;                                     //@synthesize spriteGeometry=_spriteGeometry - In the implementation block
@property (assign,nonatomic) long long alternateUIVisibility;                                     //@synthesize alternateUIVisibility=_alternateUIVisibility - In the implementation block
@property (assign,nonatomic) BOOL allowDecorations;                                               //@synthesize allowDecorations=_allowDecorations - In the implementation block
@property (nonatomic,retain) NSArray * axDecorations;                                             //@synthesize axDecorations=_axDecorations - In the implementation block
@property (nonatomic,readonly) NSString * axText; 
@property (nonatomic,readonly) NSString * axTitle; 
@property (nonatomic,readonly) NSString * axSubtitle; 
@property (nonatomic,readonly) NSString * axImageName; 
@property (nonatomic,readonly) id<PXDisplayAsset> axAsset; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> axView; 
@property (nonatomic,readonly) CGRect axFrame; 
@property (nonatomic,readonly) BOOL axIsSelected; 
+(BOOL)_assetHasContentSourceInLayout:(id)arg1 atSpriteIndex:(unsigned)arg2 ;
+(id)_imageNameInLayout:(id)arg1 atSpriteIndex:(unsigned)arg2 ;
+(id)_titleSubtitleInLayout:(id)arg1 atSpriteIndex:(unsigned)arg2 ;
+(id)sharedPool;
+(id)_textInLayout:(id)arg1 atSpriteIndex:(unsigned)arg2 ;
+(Class)_viewClassInLayout:(id)arg1 atSpriteIndex:(unsigned)arg2 ;
-(BOOL)canBecomeFocused;
-(void)becomeReusable;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(unsigned)spriteIndex;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(void)setNeedsFocusUpdate;
-(NSString *)axText;
-(id)init;
-(void)setSpriteIndex:(unsigned)arg1 ;
-(void)setAxContainingGroup:(PXGBasicAXGroup *)arg1 ;
-(NSString *)axSubtitle;
-(NSArray *)axDecorations;
-(CGRect)frame;
-(void)setAxContentKind:(long long)arg1 ;
-(BOOL)allowDecorations;
-(PXGBasicAXGroup *)axContainingGroup;
-(void)prepareForReuse;
-(void)applyToInfo:(id)arg1 ;
-(NSString *)axImageName;
-(BOOL)_fillForKind:(long long)arg1 withLayout:(id)arg2 spriteIndex:(unsigned)arg3 ;
-(void)setAxDecorations:(NSArray *)arg1 ;
-(void)setContent:(id)arg1 ofContentKind:(long long)arg2 ;
-(NSString *)description;
-(SCD_Struct_PX106)spriteGeometry;
-(id<PXDisplayAsset>)axAsset;
-(CGRect)axFrame;
-(BOOL)axIsSelected;
-(void)setSpriteGeometry:(SCD_Struct_PX106)arg1 ;
-(id<UIFocusItemContainer>)focusItemContainer;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id)_viewAtSpriteIndex:(unsigned)arg1 ;
-(void)setAlternateUIVisibility:(long long)arg1 ;
-(long long)axContentKind;
-(void)updateFocusIfNeeded;
-(NSObject*<PXAnonymousView>)axView;
-(void)setAllowDecorations:(BOOL)arg1 ;
-(BOOL)fillContentForContentKind:(long long)arg1 inLayout:(id)arg2 atIndex:(unsigned)arg3 ;
-(NSString *)axTitle;
-(long long)alternateUIVisibility;
@end

