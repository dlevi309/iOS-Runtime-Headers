/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class NSString, NSNumber;

@interface BRCVolume : NSObject {

	statfs _stfs;
	BOOL _isCaseSensitive;
	BOOL _isIgnoringOwnership;
	BOOL _hasRenameExcl;
	BOOL _hasRenameSwap;
	BOOL _hasCloning;
	int _deviceID;

}

@property (nonatomic,readonly) int deviceID;                          //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) BOOL isCaseSensitive;                  //@synthesize isCaseSensitive=_isCaseSensitive - In the implementation block
@property (nonatomic,readonly) BOOL isIgnoringOwnership;              //@synthesize isIgnoringOwnership=_isIgnoringOwnership - In the implementation block
@property (nonatomic,readonly) BOOL hasRenameSwap;                    //@synthesize hasRenameSwap=_hasRenameSwap - In the implementation block
@property (nonatomic,readonly) BOOL hasRenameExcl;                    //@synthesize hasRenameExcl=_hasRenameExcl - In the implementation block
@property (nonatomic,readonly) BOOL hasCloning;                       //@synthesize hasCloning=_hasCloning - In the implementation block
@property (nonatomic,readonly) NSString * mountPath; 
@property (nonatomic,readonly) NSString * fsTypeName; 
@property (nonatomic,readonly) NSNumber * freeSize; 
@property (nonatomic,readonly) NSNumber * totalSize; 
-(id)description;
-(int)deviceID;
-(BOOL)isCaseSensitive;
-(NSNumber *)totalSize;
-(NSString *)mountPath;
-(BOOL)setUpForRelPath:(id)arg1 session:(id)arg2 error:(id*)arg3 ;
-(NSString *)fsTypeName;
-(NSNumber *)freeSize;
-(BOOL)isIgnoringOwnership;
-(BOOL)hasRenameExcl;
-(BOOL)hasRenameSwap;
-(BOOL)hasCloning;
@end

