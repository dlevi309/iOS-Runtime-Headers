/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyMapEntryVerifier, SignedMapHead, NSMutableArray, NSData;

@interface MapEntry : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyMapEntryVerifier * verifier; 
@property (nonatomic,retain) SignedMapHead * smh; 
@property (assign,nonatomic) BOOL hasSmh; 
@property (nonatomic,retain) NSMutableArray * hashesOfPeersInPathToRootArray; 
@property (nonatomic,readonly) unsigned long long hashesOfPeersInPathToRootArray_Count; 
@property (nonatomic,copy) NSData * mapLeaf; 
+(id)descriptor;
-(BOOL)verifyWithError:(id*)arg1 ;
-(TransparencyMapEntryVerifier *)verifier;
-(void)setVerifier:(TransparencyMapEntryVerifier *)arg1 ;
@end

