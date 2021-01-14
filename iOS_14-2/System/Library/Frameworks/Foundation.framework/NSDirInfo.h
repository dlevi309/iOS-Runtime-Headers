/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <CoreFoundation/NSMutableDictionary.h>

@class NSMutableDictionary;

@interface NSDirInfo : NSMutableDictionary {

	NSMutableDictionary* dict;

}
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5 ;
-(id)init;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)keyEnumerator;
-(id)serializeToData;
-(id)objectForKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

