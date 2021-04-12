/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString;

@interface BSStackFrameInfo : NSObject {

	NSString* _realFunctionName;
	unsigned long long _address;
	NSString* _functionName;
	NSString* _executablePath;
	NSString* _className;

}

@property (nonatomic,readonly) unsigned long long address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * functionName;                 //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) NSString * executableName; 
@property (nonatomic,readonly) NSString * executablePath;               //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,readonly) NSString * className;                    //@synthesize className=_className - In the implementation block
-(NSString *)executablePath;
-(NSString *)className;
-(NSString *)executableName;
-(NSString *)functionName;
-(id)description;
-(unsigned long long)address;
@end

