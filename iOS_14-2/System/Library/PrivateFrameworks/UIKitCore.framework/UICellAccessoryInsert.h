/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICellAccessory.h>

@class UIColor;

@interface UICellAccessoryInsert : UICellAccessory {

	/*^block*/id _actionHandler;

}

@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,copy) id actionHandler;                         //@synthesize actionHandler=_actionHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)_identifier;
-(long long)_systemTypePlacementForHeader:(BOOL)arg1 ;
-(long long)_systemType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

