/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@class NSString, NSArray;

@interface MCTypeInput : MCKeyboardInput {

	NSString* _characters;
	NSArray* _nearbyKeys;

}

@property (nonatomic,copy,readonly) NSString * characters;              //@synthesize characters=_characters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * nearbyKeys;               //@synthesize nearbyKeys=_nearbyKeys - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)characters;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithCharacters:(id)arg1 nearbyKeys:(id)arg2 ;
-(NSArray *)nearbyKeys;
@end

