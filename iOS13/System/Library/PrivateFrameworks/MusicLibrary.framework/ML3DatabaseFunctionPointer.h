/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3DatabaseFunction.h>

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction {

	/*function pointer*/void* _functionPointer;
	void* _userData;

}

@property (assign,nonatomic) /*function pointer*/void* functionPointer;              //@synthesize functionPointer=_functionPointer - In the implementation block
@property (assign,nonatomic) void* userData;                                         //@synthesize userData=_userData - In the implementation block
-(void*)userData;
-(void)setUserData:(void*)arg1 ;
-(BOOL)registerWithConnection:(id)arg1 ;
-(/*function pointer*/void*)functionPointer;
-(void)setFunctionPointer:(/*function pointer*/void*)arg1 ;
@end

