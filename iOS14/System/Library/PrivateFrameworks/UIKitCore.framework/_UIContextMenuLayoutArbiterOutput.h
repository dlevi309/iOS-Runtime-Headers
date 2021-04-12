/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMapTable;

@interface _UIContextMenuLayoutArbiterOutput : NSObject {

	NSMapTable* _accessoryPositions;
	CGPoint _menuAnchorPoint;
	CGRect _contentBounds;
	CGRect _previewFrame;
	CGRect _menuFrame;
	SCD_Struct_UI3 _anchor;

}

@property (assign,nonatomic) CGRect contentBounds;                         //@synthesize contentBounds=_contentBounds - In the implementation block
@property (assign,nonatomic) CGRect previewFrame;                          //@synthesize previewFrame=_previewFrame - In the implementation block
@property (assign,nonatomic) CGRect menuFrame;                             //@synthesize menuFrame=_menuFrame - In the implementation block
@property (assign,nonatomic) CGPoint menuAnchorPoint;                      //@synthesize menuAnchorPoint=_menuAnchorPoint - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI3 anchor;                        //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSMapTable * accessoryPositions;              //@synthesize accessoryPositions=_accessoryPositions - In the implementation block
-(CGRect)contentBounds;
-(void)setMenuFrame:(CGRect)arg1 ;
-(void)setMenuAnchorPoint:(CGPoint)arg1 ;
-(NSMapTable *)accessoryPositions;
-(void)setAccessoryPositions:(NSMapTable *)arg1 ;
-(void)setContentBounds:(CGRect)arg1 ;
-(CGRect)menuFrame;
-(SCD_Struct_UI3)anchor;
-(CGRect)previewFrame;
-(void)setAnchor:(SCD_Struct_UI3)arg1 ;
-(CGPoint)menuAnchorPoint;
-(void)setPreviewFrame:(CGRect)arg1 ;
@end

