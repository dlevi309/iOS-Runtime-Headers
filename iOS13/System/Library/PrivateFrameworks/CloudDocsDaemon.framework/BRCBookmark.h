/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class BRCAccountSession, BRCAppLibrary, NSData, BRCLocalItem, BRCServerZone, BRCRelativePath;

@interface BRCBookmark : NSObject {

	BRCAccountSession* _session;
	BRCAppLibrary* _appLibrary;
	NSData* _bookmarkData;
	BRCLocalItem* _target;
	BRCServerZone* _targetServerZone;
	BRCRelativePath* _targetRelpath;
	BOOL _targetResolved;
	BOOL _dataResolved;
	BOOL _containsItemID;

}

@property (nonatomic,readonly) BOOL containsItemID; 
@property (nonatomic,readonly) BRCServerZone * targetServerZone; 
@property (nonatomic,readonly) BRCLocalItem * target; 
+(id)createName;
+(void)unlinkAliasAtPath:(id)arg1 ;
-(BRCLocalItem *)target;
-(id)initWithTarget:(id)arg1 owningAppLibrary:(id)arg2 path:(id)arg3 session:(id)arg4 ;
-(BOOL)resolveWithError:(id*)arg1 ;
-(id)writeUnderParent:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(id)initWithRelpath:(id)arg1 ;
-(void)_computeSignature:(unsigned char)arg1 ;
-(int)_validateSignatureWithFd:(int)arg1 ;
-(BOOL)_resolveTargetWithError:(id*)arg1 ;
-(BOOL)_resolveDataWithError:(id*)arg1 ;
-(BOOL)containsItemID;
-(BRCServerZone *)targetServerZone;
@end

