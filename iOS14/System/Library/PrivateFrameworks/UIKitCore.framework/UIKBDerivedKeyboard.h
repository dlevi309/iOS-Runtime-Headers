/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)keyboardSize;
-(void)setDerivedKBStarPrefixName:(NSString *)arg1 ;
-(void)setKeyboardSize:(CGSize)arg1 ;
-(void)setAddsSupplementaryControlKeys:(BOOL)arg1 ;
-(NSString *)derivedKBStarPrefixName;
-(BOOL)addsSupplementaryControlKeys;
@end

