/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface TUICandidateLayoutAttributes : UICollectionViewLayoutAttributes {

	unsigned long long _candidateNumber;
	double _contentAlpha;
	unsigned long long _row;

}

@property (assign,nonatomic) unsigned long long candidateNumber;              //@synthesize candidateNumber=_candidateNumber - In the implementation block
@property (assign,nonatomic) double contentAlpha;                             //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (assign,nonatomic) unsigned long long row;                          //@synthesize row=_row - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)row;
-(void)setContentAlpha:(double)arg1 ;
-(double)contentAlpha;
-(void)setRow:(unsigned long long)arg1 ;
-(void)setCandidateNumber:(unsigned long long)arg1 ;
-(unsigned long long)candidateNumber;
@end

