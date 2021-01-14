/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@interface _TDPackerNode : NSObject {

	BOOL _used;
	BOOL _fit;
	_TDPackerNode* _down;
	_TDPackerNode* _right;
	void* _node;
	CGSize _size;
	CGPoint _origin;

}

@property (assign,nonatomic) BOOL used;                          //@synthesize used=_used - In the implementation block
@property (nonatomic,retain) _TDPackerNode * down;               //@synthesize down=_down - In the implementation block
@property (nonatomic,retain) _TDPackerNode * right;              //@synthesize right=_right - In the implementation block
@property (assign,nonatomic) BOOL fit;                           //@synthesize fit=_fit - In the implementation block
@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGPoint origin;                     //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) void* node;                         //@synthesize node=_node - In the implementation block
-(BOOL)used;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setUsed:(BOOL)arg1 ;
-(_TDPackerNode *)down;
-(BOOL)fit;
-(CGPoint)origin;
-(_TDPackerNode *)right;
-(void*)node;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setNode:(void*)arg1 ;
-(void)setRight:(_TDPackerNode *)arg1 ;
-(void)setFit:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDown:(_TDPackerNode *)arg1 ;
@end

