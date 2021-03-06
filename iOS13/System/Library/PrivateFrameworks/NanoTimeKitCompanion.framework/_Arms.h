/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSArray, NSNumber;

@interface _Arms : _Geometry {

	float _leftShoulderX;
	float _rightShoulderX;
	float _leftShoulderAdjustment;
	float _rightShoulderAdjustment;
	float _curLeftBend;
	float _curRightBend;
	NSArray* _texHandMnut;
	NSNumber* _texHandHour;
	NSNumber* _texArm;
	unsigned long long _mtlBufHandOffset;
	unsigned long long _mtlBufArmOffset;

}

@property (nonatomic,retain) NSArray * texHandMnut;                            //@synthesize texHandMnut=_texHandMnut - In the implementation block
@property (nonatomic,retain) NSNumber * texHandHour;                           //@synthesize texHandHour=_texHandHour - In the implementation block
@property (nonatomic,retain) NSNumber * texArm;                                //@synthesize texArm=_texArm - In the implementation block
@property (assign,nonatomic) unsigned long long mtlBufHandOffset;              //@synthesize mtlBufHandOffset=_mtlBufHandOffset - In the implementation block
@property (assign,nonatomic) unsigned long long mtlBufArmOffset;               //@synthesize mtlBufArmOffset=_mtlBufArmOffset - In the implementation block
@property (assign,nonatomic) float leftShoulderX;                              //@synthesize leftShoulderX=_leftShoulderX - In the implementation block
@property (assign,nonatomic) float rightShoulderX;                             //@synthesize rightShoulderX=_rightShoulderX - In the implementation block
@property (assign,nonatomic) float leftShoulderAdjustment;                     //@synthesize leftShoulderAdjustment=_leftShoulderAdjustment - In the implementation block
@property (assign,nonatomic) float rightShoulderAdjustment;                    //@synthesize rightShoulderAdjustment=_rightShoulderAdjustment - In the implementation block
@property (assign,nonatomic) float curLeftBend;                                //@synthesize curLeftBend=_curLeftBend - In the implementation block
@property (assign,nonatomic) float curRightBend;                               //@synthesize curRightBend=_curRightBend - In the implementation block
-(NSArray *)texHandMnut;
-(void)setTexHandMnut:(NSArray *)arg1 ;
-(NSNumber *)texHandHour;
-(void)setTexHandHour:(NSNumber *)arg1 ;
-(NSNumber *)texArm;
-(void)setTexArm:(NSNumber *)arg1 ;
-(unsigned long long)mtlBufHandOffset;
-(void)setMtlBufHandOffset:(unsigned long long)arg1 ;
-(unsigned long long)mtlBufArmOffset;
-(void)setMtlBufArmOffset:(unsigned long long)arg1 ;
-(float)leftShoulderX;
-(void)setLeftShoulderX:(float)arg1 ;
-(float)rightShoulderX;
-(void)setRightShoulderX:(float)arg1 ;
-(float)leftShoulderAdjustment;
-(void)setLeftShoulderAdjustment:(float)arg1 ;
-(float)rightShoulderAdjustment;
-(void)setRightShoulderAdjustment:(float)arg1 ;
-(float)curLeftBend;
-(void)setCurLeftBend:(float)arg1 ;
-(float)curRightBend;
-(void)setCurRightBend:(float)arg1 ;
@end

