/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryEnumerator.h>

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {

	CFURLEnumeratorRef _enumerator;
	/*^block*/id _errorHandler;
	BOOL shouldContinue;
	BOOL isPostOrderDirectory;

}

@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)dealloc;
-(id)nextObject;
-(id)fileAttributes;
-(id)directoryAttributes;
-(unsigned long long)level;
-(void)skipDescendents;
-(void)skipDescendants;
-(BOOL)isEnumeratingDirectoryPostOrder;
-(void)setErrorHandler:(id)arg1 ;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)errorHandler;
@end

