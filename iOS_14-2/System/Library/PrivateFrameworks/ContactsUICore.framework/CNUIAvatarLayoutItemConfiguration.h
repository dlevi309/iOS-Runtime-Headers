/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


#import <ContactsUICore/ContactsUICore-Structs.h>
@interface CNUIAvatarLayoutItemConfiguration : NSObject {

	double _size;
	double _x;
	double _y;
	double _baseSize;

}

@property (assign,nonatomic) double size;                  //@synthesize size=_size - In the implementation block
@property (assign,x,nonatomic) double x;                   //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;                   //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) double baseSize;              //@synthesize baseSize=_baseSize - In the implementation block
-(double)x;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(double)y;
-(double)size;
-(void)updateLayer:(id)arg1 inBounds:(CGRect)arg2 atIndex:(long long)arg3 isRTL:(BOOL)arg4 ;
-(void)setSize:(double)arg1 ;
-(CGRect)itemFrameInContainingBounds:(CGRect)arg1 isRTL:(BOOL)arg2 ;
-(double)baseSize;
-(void)setBaseSize:(double)arg1 ;
-(id)initWithSize:(double)arg1 x:(double)arg2 y:(double)arg3 baseSize:(double)arg4 ;
@end

