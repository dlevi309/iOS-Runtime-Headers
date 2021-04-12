/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@interface TIMecabraWrapper : NSObject {

	int _inputMethodType;
	MecabraRef _mecabraRef;

}

@property (readonly) int inputMethodType;                //@synthesize inputMethodType=_inputMethodType - In the implementation block
@property (readonly) MecabraRef mecabraRef;              //@synthesize mecabraRef=_mecabraRef - In the implementation block
-(void)dealloc;
-(id)initWithInputMethodType:(int)arg1 learningDictionaryDirectoryURL:(CFURLRef)arg2 creationOptions:(unsigned long long)arg3 ;
-(int)inputMethodType;
-(MecabraRef)mecabraRef;
@end

