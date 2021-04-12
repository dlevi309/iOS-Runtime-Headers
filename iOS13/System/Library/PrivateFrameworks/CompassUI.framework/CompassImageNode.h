/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
*/


#import <CompassUI/CompassUI-Structs.h>
@class NSString;

@interface CompassImageNode : NSObject {

	CompassImageNode* _leftChild;
	CompassImageNode* _rightChild;
	NSString* _imageKey;
	CGRect _rect;

}

@property (nonatomic,retain) CompassImageNode * leftChild;               //@synthesize leftChild=_leftChild - In the implementation block
@property (nonatomic,retain) CompassImageNode * rightChild;              //@synthesize rightChild=_rightChild - In the implementation block
@property (assign,nonatomic) CGRect rect;                                //@synthesize rect=_rect - In the implementation block
@property (nonatomic,copy) NSString * imageKey;                          //@synthesize imageKey=_imageKey - In the implementation block
-(CompassImageNode *)leftChild;
-(void)setLeftChild:(CompassImageNode *)arg1 ;
-(CompassImageNode *)rightChild;
-(void)setRightChild:(CompassImageNode *)arg1 ;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(id)insertImageWithSize:(CGSize)arg1 key:(id)arg2 ;
-(void)setImageKey:(NSString *)arg1 ;
-(NSString *)imageKey;
@end

