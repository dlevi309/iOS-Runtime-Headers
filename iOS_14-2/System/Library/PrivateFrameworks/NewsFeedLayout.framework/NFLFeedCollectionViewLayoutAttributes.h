/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)columnSpan;
-(long long)cellType;
-(void)setColumnSpan:(long long)arg1 ;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(void)setCellType:(long long)arg1 ;
-(long long)rowSpan;
-(void)setRowSpan:(long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

