/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSString;

@interface CUKeyValueStoreWriter : NSObject {

	cdb_make* _cdb;
	BOOL _cdbStarted;
	NSString* _finalPath;
	int _tempFD;
	char _tempPath[1024];

}
-(id)init;
-(void)dealloc;
-(void)cancel;
-(BOOL)startAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)finishAndReturnError:(id*)arg1 ;
-(BOOL)addKey:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
@end

