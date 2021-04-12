/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCSectionProviding;
@class NSArray, NSDate;

@interface FCEditorialOperationGroup : NSObject {

	id<FCSectionProviding> _section;
	NSArray* _headlines;
	NSDate* _publishDate;

}

@property (nonatomic,retain) id<FCSectionProviding> section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSArray * headlines;                         //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,retain) NSDate * publishDate;                        //@synthesize publishDate=_publishDate - In the implementation block
-(id<FCSectionProviding>)section;
-(void)setSection:(id<FCSectionProviding>)arg1 ;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
-(NSArray *)headlines;
-(void)setHeadlines:(NSArray *)arg1 ;
@end

