/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class UIColor, NSDictionary;

@interface AVTMaterial : NSObject {

	UIColor* baseColor;
	NSDictionary* secondaryColors;

}

@property (retain) UIColor * baseColor; 
@property (retain) NSDictionary * secondaryColors; 
+(id)materialWithColor:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(UIColor *)baseColor;
-(void)applyToSceneKitMaterial:(id)arg1 ;
-(NSDictionary *)secondaryColors;
-(void)setSecondaryColors:(NSDictionary *)arg1 ;
-(void)_encode:(id)arg1 ;
-(BOOL)_decode:(id)arg1 ;
@end

