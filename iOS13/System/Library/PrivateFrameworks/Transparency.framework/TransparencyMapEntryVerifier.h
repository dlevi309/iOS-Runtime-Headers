/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class TransparencyTrustedKeyStore, NSData;

@interface TransparencyMapEntryVerifier : NSObject {

	TransparencyTrustedKeyStore* _trustedKeyStore;
	NSData* _entryPosition;

}

@property (retain) NSData * entryPosition;                                     //@synthesize entryPosition=_entryPosition - In the implementation block
@property (retain) TransparencyTrustedKeyStore * trustedKeyStore;              //@synthesize trustedKeyStore=_trustedKeyStore - In the implementation block
+(id)peerIndexAtDepth:(unsigned long long)arg1 leafIndex:(id)arg2 ;
+(id)leafHash:(id)arg1 index:(id)arg2 treeId:(unsigned long long)arg3 ;
+(id)emptyAtDepth:(unsigned long long)arg1 leafIndex:(id)arg2 treeId:(unsigned long long)arg3 ;
+(id)interiorNodeForLeftData:(id)arg1 rightData:(id)arg2 ;
-(TransparencyTrustedKeyStore *)trustedKeyStore;
-(void)setTrustedKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
-(BOOL)verifyMapEntryWithMapLeaf:(id)arg1 hashesToRoot:(id)arg2 signedMapHead:(id)arg3 error:(id*)arg4 ;
-(id)initWithPositon:(id)arg1 trustedKeyStore:(id)arg2 ;
-(BOOL)verifyInclusionOfMapLeaf:(id)arg1 position:(id)arg2 treeHead:(id)arg3 treeId:(unsigned long long)arg4 hashPath:(id)arg5 error:(id*)arg6 ;
-(NSData *)entryPosition;
-(void)setEntryPosition:(NSData *)arg1 ;
@end

