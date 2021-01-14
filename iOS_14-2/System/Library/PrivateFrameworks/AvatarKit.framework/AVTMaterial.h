/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBaseColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)baseColor;
-(NSDictionary *)secondaryColors;
-(void)setSecondaryColors:(NSDictionary *)arg1 ;
-(void)_encode:(id)arg1 ;
-(BOOL)_decode:(id)arg1 ;
-(void)applyToSceneKitMaterial:(id)arg1 ;
@end

