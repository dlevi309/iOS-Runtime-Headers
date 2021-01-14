/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface CAMNebulaKeepAliveController : NSObject {

	BOOL __didCreateKeepAliveDirectory;
	int __nebuladKeepAliveFileDescriptor;
	NSObject*<OS_dispatch_queue> __syncQueue;
	NSMutableSet* __nebuladKeepAliveIdentifiers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _syncQueue;                                                   //@synthesize _syncQueue=__syncQueue - In the implementation block
@property (assign,setter=_setNebuladKeepAliveFileDescriptor:,nonatomic) int _nebuladKeepAliveFileDescriptor;              //@synthesize _nebuladKeepAliveFileDescriptor=__nebuladKeepAliveFileDescriptor - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _nebuladKeepAliveIdentifiers;                                               //@synthesize _nebuladKeepAliveIdentifiers=__nebuladKeepAliveIdentifiers - In the implementation block
@property (assign,setter=_setDidCreateKeepAliveDirectory:,nonatomic) BOOL _didCreateKeepAliveDirectory;                   //@synthesize _didCreateKeepAliveDirectory=__didCreateKeepAliveDirectory - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)_syncQueue;
-(BOOL)_didCreateKeepAliveDirectory;
-(void)_setDidCreateKeepAliveDirectory:(BOOL)arg1 ;
-(int)_nebuladKeepAliveFileDescriptor;
-(id)_keepAliveFilePath;
-(void)_setNebuladKeepAliveFileDescriptor:(int)arg1 ;
-(void)startKeepAliveForIdentifier:(id)arg1 ;
-(void)stopKeepAliveForIdentifier:(id)arg1 ;
-(void)removeKeepAliveFileIfNotKeptForAnyIdentifiers;
-(NSMutableSet *)_nebuladKeepAliveIdentifiers;
@end

