/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/


@class SKNode;

@interface IKLink : NSObject {

	float _angleInitial;
	float _angle;
	float _length;
	SKNode* _node;
	GLKVector2 _position;
	GLKVector2 _size;

}

@property (nonatomic,retain) SKNode * node;                     //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) _GLKVector2 position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float angleInitial;                //@synthesize angleInitial=_angleInitial - In the implementation block
@property (nonatomic,readonly) float angle;                     //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) float length;                      //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) _GLKVector2 size;                  //@synthesize size=_size - In the implementation block
-(float)length;
-(void)setLength:(float)arg1 ;
-(_GLKVector2)size;
-(_GLKVector2)position;
-(SKNode *)node;
-(void)setSize:(_GLKVector2)arg1 ;
-(float)angle;
-(void)setNode:(SKNode *)arg1 ;
-(void)setPosition:(_GLKVector2)arg1 ;
-(id)initWithNode:(id)arg1 ;
-(void)rotateByAngle:(float)arg1 ;
-(double)normalizeAngle:(double)arg1 ;
-(float)angleInitial;
-(void)setAngleInitial:(float)arg1 ;
@end

