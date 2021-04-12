/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {

	NSURL* _passURL;
	NSDictionary* _remoteAssetsByTaskIdentifier;
	NSDictionary* _remoteAssetsByRecordName;

}

@property (nonatomic,retain) NSURL * passURL;                                          //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteAssetsByTaskIdentifier;              //@synthesize remoteAssetsByTaskIdentifier=_remoteAssetsByTaskIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteAssetsByRecordName;                  //@synthesize remoteAssetsByRecordName=_remoteAssetsByRecordName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
-(void)setRemoteURLAsset:(id)arg1 forTaskIdentifier:(id)arg2 ;
-(void)setRemoteCloudStoreAsset:(id)arg1 forRecordName:(id)arg2 ;
-(void)removeRemoteURLAssetForTaskIdentifier:(id)arg1 ;
-(BOOL)hasOutstandingRemoteAssetTasks;
-(void)removeRemoteCloudStoreAssetForRecordName:(id)arg1 ;
-(NSDictionary *)remoteAssetsByTaskIdentifier;
-(NSDictionary *)remoteAssetsByRecordName;
-(void)setRemoteAssetsByTaskIdentifier:(NSDictionary *)arg1 ;
-(void)setRemoteAssetsByRecordName:(NSDictionary *)arg1 ;
@end

