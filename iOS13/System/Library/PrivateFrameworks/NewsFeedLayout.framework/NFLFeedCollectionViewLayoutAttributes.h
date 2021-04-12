/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface NFLFeedCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	long long _cellType;
	long long _columnSpan;
	long long _rowSpan;

}

@property (assign,nonatomic) long long cellType;                //@synthesize cellType=_cellType - In the implementation block
@property (assign,nonatomic) long long columnSpan;              //@synthesize columnSpan=_columnSpan - In the implementation block
@property (assign,nonatomic) long long rowSpan;                 //@synthesize rowSpan=_rowSpan - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)columnSpan;
-(long long)rowSpan;
-(long long)cellType;
-(void)setCellType:(long long)arg1 ;
-(void)setRowSpan:(long long)arg1 ;
-(void)setColumnSpan:(long long)arg1 ;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
@end

