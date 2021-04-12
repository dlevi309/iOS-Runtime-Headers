/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSURL, MPModelStoreBrowseResponse, MPModelRadioStation;

@interface MPModelStoreBrowseSection : MPModelObject {

	BOOL _containsOnlyEditorialElements;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long sectionType; 
@property (nonatomic,copy) NSURL * loadAdditionalContentURL; 
@property (assign,nonatomic) BOOL displaysAsGridCellInCarPlay; 
@property (assign,nonatomic) long long uniformContentItemType; 
@property (assign,getter=isMemberOfChartSet,nonatomic) BOOL memberOfChartSet; 
@property (assign,getter=isBrick,nonatomic) BOOL brick; 
@property (nonatomic,retain) MPModelStoreBrowseResponse * previouslyRetrievedNestedResponse; 
@property (nonatomic,retain) MPModelRadioStation * radioStation; 
@property (assign,nonatomic) BOOL containsOnlyEditorialElements;                                          //@synthesize containsOnlyEditorialElements=_containsOnlyEditorialElements - In the implementation block
+(id)__title_KEY;
+(id)__radioStation_KEY;
+(id)__loadAdditionalContentURL_KEY;
+(id)__displaysAsGridCellInCarPlay_KEY;
+(id)__sectionType_KEY;
+(id)__uniformContentItemType_KEY;
+(id)__memberOfChartSet_KEY;
+(id)__brick_KEY;
+(id)__previouslyRetrievedNestedResponse_KEY;
-(BOOL)containsOnlyEditorialElements;
-(void)setContainsOnlyEditorialElements:(BOOL)arg1 ;
@end

