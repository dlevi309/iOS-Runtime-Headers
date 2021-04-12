/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMapTable;

@interface _UIContextMenuLayoutArbiterOutput : NSObject {

	NSMapTable* _accessoryPositions;
	NSRange _anchor;
	CGRect _contentBounds;
	CGRect _previewFrame;
	CGRect _menuFrame;

}

@property (assign,nonatomic) CGRect contentBounds;                         //@synthesize contentBounds=_contentBounds - In the implementation block
@property (assign,nonatomic) CGRect previewFrame;                          //@synthesize previewFrame=_previewFrame - In the implementation block
@property (assign,nonatomic) CGRect menuFrame;                             //@synthesize menuFrame=_menuFrame - In the implementation block
@property (assign,nonatomic) NSRange anchor;                               //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,retain) NSMapTable * accessoryPositions;              //@synthesize accessoryPositions=_accessoryPositions - In the implementation block
-(NSRange)anchor;
-(CGRect)menuFrame;
-(CGRect)contentBounds;
-(void)setContentBounds:(CGRect)arg1 ;
-(CGRect)previewFrame;
-(void)setPreviewFrame:(CGRect)arg1 ;
-(void)setMenuFrame:(CGRect)arg1 ;
-(void)setAnchor:(NSRange)arg1 ;
-(NSMapTable *)accessoryPositions;
-(void)setAccessoryPositions:(NSMapTable *)arg1 ;
@end

