/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIUserAction.h>

@interface TIPathAction : TIUserAction {

	unsigned long long _syllableCount;

}

@property (nonatomic,readonly) unsigned long long syllableCount;              //@synthesize syllableCount=_syllableCount - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)syllableCount;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2 ;
@end

