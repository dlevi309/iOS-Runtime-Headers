/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarAppearanceData.h>

@class NSDictionary;

@interface _UINavTitleAppearanceData : _UIBarAppearanceData {

	NSDictionary* _titleTextAttributes;
	NSDictionary* _largeTitleTextAttributes;
	UIOffset _titlePositionAdjustment;

}

@property (nonatomic,copy) NSDictionary * titleTextAttributes; 
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (nonatomic,copy) NSDictionary * largeTitleTextAttributes; 
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
+(id)standardTitleData;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(void)describeInto:(id)arg1 ;
-(id)replicate;
-(long long)hashInto:(long long)arg1 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(void)setLargeTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)largeTitleTextAttributes;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
@end

