/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSOperation.h>

@class NSFileManager, NSString, NSError;

@interface NSFilesystemItemRemoveOperation : NSOperation {

	NSFileManager* _fm;
	NSString* _removePath;
	NSError* _error;
	void* _state;

}

@property (readonly) NSFileManager * fileManager;              //@synthesize fm=_fm - In the implementation block
+(id)filesystemItemRemoveOperationWithPath:(id)arg1 fileManager:(id)arg2 ;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
-(NSFileManager *)fileManager;
-(BOOL)_delegateSaysShouldRemoveItemAtPath:(id)arg1 ;
-(void)_setError:(id)arg1 ;
-(id)error;
-(BOOL)_delegateSaysProceedAfterError:(id)arg1 removingItemAtPath:(id)arg2 ;
-(void)main;
-(id)initWithPath:(id)arg1 fileManager:(id)arg2 ;
-(void)dealloc;
@end

