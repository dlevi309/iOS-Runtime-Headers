/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)standardTitleData;
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(id)replicate;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(long long)hashInto:(long long)arg1 ;
-(void)setLargeTitleTextAttributes:(NSDictionary *)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(void)describeInto:(id)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(NSDictionary *)largeTitleTextAttributes;
@end

