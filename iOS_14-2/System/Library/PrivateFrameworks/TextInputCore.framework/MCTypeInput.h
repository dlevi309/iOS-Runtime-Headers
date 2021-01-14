/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)characters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithCharacters:(id)arg1 nearbyKeys:(id)arg2 ;
-(NSArray *)nearbyKeys;
@end

