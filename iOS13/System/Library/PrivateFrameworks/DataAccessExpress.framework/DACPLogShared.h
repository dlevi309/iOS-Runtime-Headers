/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/


@class NSMutableDictionary;

@interface DACPLogShared : NSObject {

	NSMutableDictionary* _UUIDToFileMap;

}
+(id)shared;
-(id)init;
-(id)_getUUIDForFolder:(id)arg1 baseName:(id)arg2 ;
-(BOOL)_logData:(id)arg1 UUID:(id)arg2 startNewFile:(BOOL)arg3 sizeCheck:(long long)arg4 wantsCompressed:(BOOL)arg5 maxFileCount:(long long)arg6 outDidCreateNewFile:(BOOL*)arg7 outNewFilePath:(id*)arg8 ;
-(BOOL)_slurpToFileUUID:(id)arg1 slurpeeFileDescriptor:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 startNewFile:(BOOL)arg5 sizeCheck:(long long)arg6 wantsCompressed:(BOOL)arg7 maxLogFileCount:(int)arg8 outDidCreateNewFile:(BOOL*)arg9 outNewFilePath:(id*)arg10 ;
-(BOOL)_array:(id)arg1 beginsWithArray:(id)arg2 outRemainingArray:(id*)arg3 ;
@end

