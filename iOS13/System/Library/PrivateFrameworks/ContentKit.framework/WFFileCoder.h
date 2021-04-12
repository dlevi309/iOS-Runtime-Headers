/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface WFFileCoder : NSObject <NSSecureCoding> {

	NSURL* _sharedDirectory;
	NSURL* _sharedTemporaryDirectory;
	long long _deletionResponsibility;
	long long _targetPlatform;

}

@property (nonatomic,copy) NSURL * sharedDirectory;                         //@synthesize sharedDirectory=_sharedDirectory - In the implementation block
@property (nonatomic,copy) NSURL * sharedTemporaryDirectory;                //@synthesize sharedTemporaryDirectory=_sharedTemporaryDirectory - In the implementation block
@property (assign,nonatomic) long long deletionResponsibility;              //@synthesize deletionResponsibility=_deletionResponsibility - In the implementation block
@property (assign,nonatomic) long long targetPlatform;                      //@synthesize targetPlatform=_targetPlatform - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharedDirectoryFileArchiver;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)targetPlatform;
-(void)setTargetPlatform:(long long)arg1 ;
-(void)archiveFileAtURL:(id)arg1 fileIsTemporary:(BOOL)arg2 withCoder:(id)arg3 ;
-(id)decodeFileWithCoder:(id)arg1 fileIsTemporary:(BOOL*)arg2 ;
-(void)waitForFileAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)sharedDirectory;
-(void)setSharedDirectory:(NSURL *)arg1 ;
-(NSURL *)sharedTemporaryDirectory;
-(void)setSharedTemporaryDirectory:(NSURL *)arg1 ;
-(long long)deletionResponsibility;
-(void)setDeletionResponsibility:(long long)arg1 ;
@end

