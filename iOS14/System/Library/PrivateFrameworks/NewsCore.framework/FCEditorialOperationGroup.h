/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSection:(id<FCSectionProviding>)arg1 ;
-(void)setHeadlines:(NSArray *)arg1 ;
-(id<FCSectionProviding>)section;
-(NSArray *)headlines;
-(NSDate *)publishDate;
-(void)setPublishDate:(NSDate *)arg1 ;
@end

