/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDocInfo;

@interface NSLeafProxy : _UKNOWN_SUPERCLASS_ <NSCopying> {

	Class isa;
	NSString* dir;
	NSString* file;
	NSDocInfo* docInfo;
	long long refCount;
	id realObject;

}
+()initialize;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
-(void)release;
-(BOOL)isProxy;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(id)autorelease;
-(id)copy;
-(void)reallyDealloc;
-(unsigned long long)retainCount;
-(id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

