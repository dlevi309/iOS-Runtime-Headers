/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@class NSString, NSArray;

@interface PFAssertionInfo : NSObject {

	BOOL _isClassMethod;
	BOOL _isFatal;
	SEL _selector;
	Class _objectClass;
	NSString* _functionName;
	NSString* _fileName;
	unsigned long long _lineNumber;
	NSString* _message;
	NSArray* _backtrace;

}

@property (assign) SEL selector;                               //@synthesize selector=_selector - In the implementation block
@property (retain) Class objectClass;                          //@synthesize objectClass=_objectClass - In the implementation block
@property (assign) BOOL isClassMethod;                         //@synthesize isClassMethod=_isClassMethod - In the implementation block
@property (retain) NSString * functionName;                    //@synthesize functionName=_functionName - In the implementation block
@property (retain) NSString * fileName;                        //@synthesize fileName=_fileName - In the implementation block
@property (assign) unsigned long long lineNumber;              //@synthesize lineNumber=_lineNumber - In the implementation block
@property (retain) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (retain) NSArray * backtrace;                        //@synthesize backtrace=_backtrace - In the implementation block
@property (assign) BOOL isFatal;                               //@synthesize isFatal=_isFatal - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(unsigned long long)lineNumber;
-(NSString *)fileName;
-(void)setLineNumber:(unsigned long long)arg1 ;
-(NSString *)functionName;
-(BOOL)isFatal;
-(NSArray *)backtrace;
-(id)description;
-(void)setFunctionName:(NSString *)arg1 ;
-(Class)objectClass;
-(void)setIsFatal:(BOOL)arg1 ;
-(void)setBacktrace:(NSArray *)arg1 ;
-(void)setIsClassMethod:(BOOL)arg1 ;
-(id)prettyMethodName;
-(BOOL)isClassMethod;
-(void)setObjectClass:(Class)arg1 ;
-(BOOL)isWarning;
@end

