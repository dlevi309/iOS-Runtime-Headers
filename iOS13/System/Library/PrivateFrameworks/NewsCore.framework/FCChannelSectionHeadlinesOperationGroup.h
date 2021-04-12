/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCSectionProviding;
@class NSArray;

@interface FCChannelSectionHeadlinesOperationGroup : NSObject {

	id<FCSectionProviding> _section;
	NSArray* _headlines;

}

@property (nonatomic,retain) id<FCSectionProviding> section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) NSArray * headlines;                         //@synthesize headlines=_headlines - In the implementation block
-(id)init;
-(id)description;
-(id<FCSectionProviding>)section;
-(void)setSection:(id<FCSectionProviding>)arg1 ;
-(NSArray *)headlines;
-(void)setHeadlines:(NSArray *)arg1 ;
-(id)initWithSection:(id)arg1 headlines:(id)arg2 ;
@end

