/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIUserAction.h>

@interface TIPathAction : TIUserAction {

	unsigned long long _syllableCount;

}

@property (nonatomic,readonly) unsigned long long syllableCount;              //@synthesize syllableCount=_syllableCount - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)syllableCount;
-(id)initWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2 ;
@end

