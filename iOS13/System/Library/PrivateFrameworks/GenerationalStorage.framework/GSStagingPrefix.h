/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/


@class NSString, NSArray, NSData;

@interface GSStagingPrefix : NSObject {

	unsigned char _volumeUUID[16];
	int _deviceID;
	NSString* _path;
	NSArray* _pathComponents;
	NSData* _extension;
	long long _sandboxHandle;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)finalize;
-(void)_connectionWithDaemonWasLost;
-(void)_invalidate:(BOOL)arg1 ;
-(BOOL)_refreshWithError:(id*)arg1 ;
-(id)initWithDocumentID:(id)arg1 ;
-(id)stagingPathforCreatingAdditionWithError:(id*)arg1 ;
-(BOOL)isStagedPath:(id)arg1 ;
-(void)cleanupStagingPath:(id)arg1 ;
@end

