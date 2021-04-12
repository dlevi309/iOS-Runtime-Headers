/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@interface GEMagicKit : NSObject
+(magic_setRef)sharedMagicCookie;
+(id)magicForObject:(id)arg1 decompress:(BOOL)arg2 ;
+(id)rawMagicOutputForObject:(id)arg1 cookie:(magic_setRef)arg2 flags:(int)arg3 ;
+(id)typeHierarchyForType:(id)arg1 ;
+(id)magicForFileAtPath:(id)arg1 ;
+(id)magicForFileAtURL:(id)arg1 ;
+(id)magicForData:(id)arg1 ;
+(id)magicForFileAtPath:(id)arg1 decompress:(BOOL)arg2 ;
+(id)magicForFileAtURL:(id)arg1 decompress:(BOOL)arg2 ;
+(id)magicForData:(id)arg1 decompress:(BOOL)arg2 ;
@end

