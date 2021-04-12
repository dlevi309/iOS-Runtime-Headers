/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSOperation.h>

@class NSString, NSError;

@interface NSFilesystemItemRemoveOperation : NSOperation {

	id _delegate;
	NSString* _removePath;
	NSError* _error;
	void* _state;
	BOOL _filterUnderbars;

}
+(id)filesystemItemRemoveOperationWithPath:(id)arg1 ;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)error;
-(id)initWithPath:(id)arg1 ;
-(void)_setError:(id)arg1 ;
-(void)main;
-(BOOL)_filtersUnderbars;
-(void)_setFilterUnderbars:(BOOL)arg1 ;
@end

