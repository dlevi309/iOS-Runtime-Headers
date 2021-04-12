/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSection:(id<FCSectionProviding>)arg1 ;
-(id)init;
-(void)setHeadlines:(NSArray *)arg1 ;
-(id<FCSectionProviding>)section;
-(NSArray *)headlines;
-(id)description;
-(id)initWithSection:(id)arg1 headlines:(id)arg2 ;
@end

