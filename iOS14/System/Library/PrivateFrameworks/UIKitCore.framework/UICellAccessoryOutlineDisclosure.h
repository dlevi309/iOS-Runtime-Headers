/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICellAccessory.h>

@class UIImage;

@interface UICellAccessoryOutlineDisclosure : UICellAccessory {

	long long _style;
	/*^block*/id _actionHandler;

}

@property (nonatomic,readonly) double rotationAngle; 
@property (nonatomic,readonly) UIImage * _customImage; 
@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id actionHandler;                        //@synthesize actionHandler=_actionHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)rotationAngle;
-(id)init;
-(id)actionHandler;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)_identifier;
-(long long)_systemTypePlacementForHeader:(BOOL)arg1 ;
-(UIImage *)_customImage;
-(id)initWithCoder:(id)arg1 ;
-(long long)_systemType;
-(void)setStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

