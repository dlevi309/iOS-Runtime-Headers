/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UICollectionViewLayoutAttributes, NSArray;

@interface CKBallotLayoutAttributesCollection : NSObject <NSCopying> {

	UICollectionViewLayoutAttributes* _containerAttributes;
	UICollectionViewLayoutAttributes* _voteCountAttributes;
	UICollectionViewLayoutAttributes* _ackIconAttributes;
	NSArray* _avatarAttributesCollection;
	NSArray* _nameAttributesCollection;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * containerAttributes;              //@synthesize containerAttributes=_containerAttributes - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * voteCountAttributes;              //@synthesize voteCountAttributes=_voteCountAttributes - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * ackIconAttributes;                //@synthesize ackIconAttributes=_ackIconAttributes - In the implementation block
@property (nonatomic,retain) NSArray * avatarAttributesCollection;                                //@synthesize avatarAttributesCollection=_avatarAttributesCollection - In the implementation block
@property (nonatomic,retain) NSArray * nameAttributesCollection;                                  //@synthesize nameAttributesCollection=_nameAttributesCollection - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAckIconAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setContainerAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setVoteCountAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setAvatarAttributesCollection:(NSArray *)arg1 ;
-(void)setNameAttributesCollection:(NSArray *)arg1 ;
-(UICollectionViewLayoutAttributes *)containerAttributes;
-(UICollectionViewLayoutAttributes *)ackIconAttributes;
-(UICollectionViewLayoutAttributes *)voteCountAttributes;
-(NSArray *)avatarAttributesCollection;
-(NSArray *)nameAttributesCollection;
-(void)_setContainerAttributes:(id)arg1 forLayoutMode:(unsigned long long)arg2 ;
-(void)_applyAlphaToAllAttributesAlpha:(double)arg1 ;
@end

