/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <libobjc.A.dylib/PLUnlocker.h>

@class NSURL, NSString;

@interface PLExclusiveFileLock : NSObject <PLUnlocker> {

	NSURL* _url;
	int _fd;

}

@property (nonatomic,readonly) BOOL isLocked; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)unlock;
-(BOOL)isLocked;
-(BOOL)lockWithError:(id*)arg1 ;
-(id)lockData;
-(id)lockFailure;
@end

