/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString;

@interface BSStackFrameInfo : NSObject {

	unsigned long long _address;
	NSString* _functionName;
	NSString* _className;
	NSString* _executablePath;
	NSString* _realFunctionName;

}

@property (nonatomic,readonly) unsigned long long address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * functionName;                 //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) NSString * executableName; 
@property (nonatomic,readonly) NSString * executablePath;               //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * className;                    //@synthesize className=_className - In the implementation block
-(id)description;
-(NSString *)executablePath;
-(unsigned long long)address;
-(NSString *)className;
-(NSString *)executableName;
-(id)initWithReturnAddress:(unsigned long long)arg1 ;
-(NSString *)functionName;
@end

