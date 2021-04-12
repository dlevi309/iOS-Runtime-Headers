/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDFileManager.h>
@class NSURL;


@protocol HMDFileManager <NSObject>
@property (copy,readonly) NSURL * heroFrameStoreDirectoryURL; 
@required
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4;
-(id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
-(BOOL)fileExistsAtURL:(id)arg1;
-(NSURL *)heroFrameStoreDirectoryURL;
-(BOOL)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

@end


@class NSURL, NSString;

@interface HMDFileManager : HMFObject <HMDFileManager>

@property (copy,readonly) NSURL * heroFrameStoreDirectoryURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)fileExistsAtURL:(id)arg1 ;
-(NSURL *)heroFrameStoreDirectoryURL;
-(BOOL)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
@end

