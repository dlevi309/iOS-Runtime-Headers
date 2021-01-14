/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface PUSectionedGridLayoutAttributes : UICollectionViewLayoutAttributes {

	BOOL _floating;
	BOOL _extendsTopContent;
	BOOL _exists;
	double _interactiveTransitionProgress;

}

@property (assign,nonatomic) BOOL floating;                                     //@synthesize floating=_floating - In the implementation block
@property (assign,nonatomic) double interactiveTransitionProgress;              //@synthesize interactiveTransitionProgress=_interactiveTransitionProgress - In the implementation block
@property (assign,nonatomic) BOOL extendsTopContent;                            //@synthesize extendsTopContent=_extendsTopContent - In the implementation block
@property (assign,nonatomic) BOOL exists;                                       //@synthesize exists=_exists - In the implementation block
-(void)setFloating:(BOOL)arg1 ;
-(id)init;
-(BOOL)floating;
-(BOOL)exists;
-(id)description;
-(BOOL)extendsTopContent;
-(double)interactiveTransitionProgress;
-(void)setExists:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExtendsTopContent:(BOOL)arg1 ;
-(void)setInteractiveTransitionProgress:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

