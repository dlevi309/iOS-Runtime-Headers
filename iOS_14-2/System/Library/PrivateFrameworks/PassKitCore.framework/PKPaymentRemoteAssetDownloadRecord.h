/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRemoteURLAsset:(id)arg1 forTaskIdentifier:(id)arg2 ;
-(void)setRemoteCloudStoreAsset:(id)arg1 forRecordName:(id)arg2 ;
-(void)removeRemoteURLAssetForTaskIdentifier:(id)arg1 ;
-(BOOL)hasOutstandingRemoteAssetTasks;
-(NSDictionary *)remoteAssetsByTaskIdentifier;
-(void)removeRemoteCloudStoreAssetForRecordName:(id)arg1 ;
-(NSDictionary *)remoteAssetsByRecordName;
-(id)init;
-(NSURL *)passURL;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRemoteAssetsByTaskIdentifier:(NSDictionary *)arg1 ;
-(void)setRemoteAssetsByRecordName:(NSDictionary *)arg1 ;
-(void)setPassURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

