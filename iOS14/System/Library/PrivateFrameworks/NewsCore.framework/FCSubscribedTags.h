/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)groupableTags;
-(NSArray *)mutedTags;
-(void)setSubscribedTags:(NSArray *)arg1 ;
-(void)setMutedTags:(NSArray *)arg1 ;
-(void)setAutoFavoriteTags:(NSArray *)arg1 ;
-(NSArray *)subscribedTags;
-(NSArray *)autoFavoriteTags;
-(void)setGroupableTags:(NSArray *)arg1 ;
-(id)initWithSubscribedTags:(id)arg1 mutedTags:(id)arg2 autoFavoriteTags:(id)arg3 groupableTags:(id)arg4 ;
@end

