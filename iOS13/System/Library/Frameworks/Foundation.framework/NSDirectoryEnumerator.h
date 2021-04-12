/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)fileAttributes;
-(NSDictionary *)directoryAttributes;
-(unsigned long long)level;
-(void)skipDescendents;
-(void)skipDescendants;
-(BOOL)isEnumeratingDirectoryPostOrder;
@end

