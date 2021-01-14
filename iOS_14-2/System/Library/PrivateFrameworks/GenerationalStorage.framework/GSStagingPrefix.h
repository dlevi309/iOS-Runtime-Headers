/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finalize;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(void)_invalidate:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)_connectionWithDaemonWasLost;
-(BOOL)_refreshWithError:(id*)arg1 ;
-(id)initWithDocumentID:(id)arg1 ;
-(id)stagingPathforCreatingAdditionWithError:(id*)arg1 ;
-(BOOL)isStagedPath:(id)arg1 ;
-(void)cleanupStagingPath:(id)arg1 ;
@end

