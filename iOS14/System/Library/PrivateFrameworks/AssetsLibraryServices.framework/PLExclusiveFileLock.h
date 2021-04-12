/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unlock;
-(BOOL)isLocked;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)lockData;
-(BOOL)lockWithError:(id*)arg1 ;
-(id)lockFailure;
-(void)dealloc;
@end

