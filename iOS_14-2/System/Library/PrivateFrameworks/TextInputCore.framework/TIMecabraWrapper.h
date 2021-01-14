/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithInputMethodType:(int)arg1 learningDictionaryDirectoryURL:(id)arg2 creationOptionsDictionary:(id)arg3 ;
-(int)inputMethodType;
-(MecabraRef)mecabraRef;
@end

