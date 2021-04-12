/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)nextObject;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(void)skipDescendents;
-(void)skipDescendants;
-(unsigned long long)level;
-(BOOL)isEnumeratingDirectoryPostOrder;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)directoryAttributes;
-(void)dealloc;
-(id)fileAttributes;
@end

