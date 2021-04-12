/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray;

@interface FCSubscribedTags : NSObject {

	NSArray* _subscribedTags;
	NSArray* _mutedTags;
	NSArray* _autoFavoriteTags;
	NSArray* _groupableTags;

}

@property (nonatomic,copy) NSArray * subscribedTags;                //@synthesize subscribedTags=_subscribedTags - In the implementation block
@property (nonatomic,copy) NSArray * mutedTags;                     //@synthesize mutedTags=_mutedTags - In the implementation block
@property (nonatomic,copy) NSArray * autoFavoriteTags;              //@synthesize autoFavoriteTags=_autoFavoriteTags - In the implementation block
@property (nonatomic,copy) NSArray * groupableTags;                 //@synthesize groupableTags=_groupableTags - In the implementation block
-(id)initWithSubscribedTags:(id)arg1 mutedTags:(id)arg2 autoFavoriteTags:(id)arg3 groupableTags:(id)arg4 ;
-(void)setSubscribedTags:(NSArray *)arg1 ;
-(void)setMutedTags:(NSArray *)arg1 ;
-(void)setAutoFavoriteTags:(NSArray *)arg1 ;
-(void)setGroupableTags:(NSArray *)arg1 ;
-(NSArray *)subscribedTags;
-(NSArray *)mutedTags;
-(NSArray *)autoFavoriteTags;
-(NSArray *)groupableTags;
@end

