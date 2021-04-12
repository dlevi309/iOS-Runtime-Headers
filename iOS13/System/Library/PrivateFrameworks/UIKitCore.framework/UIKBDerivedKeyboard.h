/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface UIKBDerivedKeyboard : NSObject {

	BOOL _addsSupplementaryControlKeys;
	NSString* _derivedKBStarPrefixName;
	CGSize _keyboardSize;

}

@property (assign,nonatomic) CGSize keyboardSize;                            //@synthesize keyboardSize=_keyboardSize - In the implementation block
@property (nonatomic,copy) NSString * derivedKBStarPrefixName;               //@synthesize derivedKBStarPrefixName=_derivedKBStarPrefixName - In the implementation block
@property (assign,nonatomic) BOOL addsSupplementaryControlKeys;              //@synthesize addsSupplementaryControlKeys=_addsSupplementaryControlKeys - In the implementation block
-(void)setKeyboardSize:(CGSize)arg1 ;
-(void)setDerivedKBStarPrefixName:(NSString *)arg1 ;
-(CGSize)keyboardSize;
-(void)setAddsSupplementaryControlKeys:(BOOL)arg1 ;
-(NSString *)derivedKBStarPrefixName;
-(BOOL)addsSupplementaryControlKeys;
@end

