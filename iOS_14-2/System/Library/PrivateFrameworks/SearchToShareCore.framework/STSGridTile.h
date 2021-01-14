/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/


@class NSArray, NSNumber;

@interface STSGridTile : NSObject {

	NSArray* _smallIndexes;
	NSNumber* _largeIndex;
	long long _layoutStyle;

}

@property (nonatomic,copy) NSArray * smallIndexes;               //@synthesize smallIndexes=_smallIndexes - In the implementation block
@property (nonatomic,retain) NSNumber * largeIndex;              //@synthesize largeIndex=_largeIndex - In the implementation block
@property (assign,nonatomic) long long layoutStyle;              //@synthesize layoutStyle=_layoutStyle - In the implementation block
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(id)description;
-(NSNumber *)largeIndex;
-(NSArray *)smallIndexes;
-(void)setSmallIndexes:(NSArray *)arg1 ;
-(void)setLargeIndex:(NSNumber *)arg1 ;
@end

