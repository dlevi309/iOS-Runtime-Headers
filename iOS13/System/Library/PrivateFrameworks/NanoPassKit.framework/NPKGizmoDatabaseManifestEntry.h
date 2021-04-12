/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSString, NSArray;

@interface NPKGizmoDatabaseManifestEntry : NSObject {

	NSString* _uniqueID;
	NSArray* _localManifestHashes;
	NSArray* _remoteManifestHashes;

}

@property (nonatomic,retain) NSString * uniqueID;                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSArray * localManifestHashes;               //@synthesize localManifestHashes=_localManifestHashes - In the implementation block
@property (nonatomic,retain) NSArray * remoteManifestHashes;              //@synthesize remoteManifestHashes=_remoteManifestHashes - In the implementation block
-(id)description;
-(NSString *)uniqueID;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSArray *)localManifestHashes;
-(NSArray *)remoteManifestHashes;
-(void)setLocalManifestHashes:(NSArray *)arg1 ;
-(void)setRemoteManifestHashes:(NSArray *)arg1 ;
@end

