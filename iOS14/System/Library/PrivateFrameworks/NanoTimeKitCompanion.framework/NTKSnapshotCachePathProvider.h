/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/BSPathProviding.h>

@class NSURL, NSString;

@interface NTKSnapshotCachePathProvider : NSObject <BSPathProviding>

@property (nonatomic,readonly) NSURL * defaultPath; 
@property (nonatomic,readonly) NSURL * libraryPath; 
@property (nonatomic,readonly) NSURL * cachesPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)defaultPath;
-(NSURL *)cachesPath;
-(NSURL *)libraryPath;
@end

