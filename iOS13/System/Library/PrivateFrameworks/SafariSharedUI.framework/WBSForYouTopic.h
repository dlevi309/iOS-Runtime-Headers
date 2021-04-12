/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSString, NSArray, NSDate;

@interface WBSForYouTopic : NSObject {

	NSString* _title;
	NSString* _identifier;
	NSArray* _associatedTopics;
	NSDate* _relevancyDate;
	unsigned long long _source;

}

@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * associatedTopics;                  //@synthesize associatedTopics=_associatedTopics - In the implementation block
@property (nonatomic,readonly) NSDate * relevancyDate;                  //@synthesize relevancyDate=_relevancyDate - In the implementation block
@property (assign,nonatomic) unsigned long long source;                 //@synthesize source=_source - In the implementation block
-(void)setSource:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(unsigned long long)source;
-(NSString *)title;
-(NSDate *)relevancyDate;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 relevancyDate:(id)arg3 source:(unsigned long long)arg4 ;
-(NSArray *)associatedTopics;
-(void)setAssociatedTopics:(NSArray *)arg1 ;
@end

