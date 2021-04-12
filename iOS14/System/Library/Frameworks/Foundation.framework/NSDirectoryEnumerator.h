/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (copy,readonly) NSDictionary * fileAttributes; 
@property (copy,readonly) NSDictionary * directoryAttributes; 
@property (readonly) BOOL isEnumeratingDirectoryPostOrder; 
@property (readonly) unsigned long long level; 
-(id)nextObject;
-(void)skipDescendents;
-(void)skipDescendants;
-(unsigned long long)level;
-(BOOL)isEnumeratingDirectoryPostOrder;
-(NSDictionary *)directoryAttributes;
-(NSDictionary *)fileAttributes;
@end

