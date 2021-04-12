/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)cancel;
-(BOOL)startAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)finishAndReturnError:(id*)arg1 ;
-(BOOL)addKey:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

