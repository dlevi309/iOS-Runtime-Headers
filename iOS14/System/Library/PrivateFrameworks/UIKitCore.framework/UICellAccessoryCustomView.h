/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICellAccessory.h>

@class UIView;

@interface UICellAccessoryCustomView : UICellAccessory {

	BOOL _maintainsFixedSize;
	UIView* _customView;
	long long _placement;
	/*^block*/id _position;

}

@property (nonatomic,readonly) UIView * customView;                //@synthesize customView=_customView - In the implementation block
@property (nonatomic,readonly) long long placement;                //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) BOOL maintainsFixedSize;              //@synthesize maintainsFixedSize=_maintainsFixedSize - In the implementation block
@property (nonatomic,copy) id position;                            //@synthesize position=_position - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)position;
-(long long)placement;
-(void)encodeWithCoder:(id)arg1 ;
-(UIView *)customView;
-(id)_identifier;
-(void)setPosition:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isSystemType;
-(id)initWithCustomView:(id)arg1 placement:(long long)arg2 ;
-(long long)_defaultPlacementForHeader:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)maintainsFixedSize;
-(void)setMaintainsFixedSize:(BOOL)arg1 ;
@end

