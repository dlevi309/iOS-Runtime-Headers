/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 relevancyDate:(id)arg3 source:(unsigned long long)arg4 ;
-(void)setAssociatedTopics:(NSArray *)arg1 ;
-(NSString *)identifier;
-(NSArray *)associatedTopics;
-(NSString *)title;
-(unsigned long long)source;
-(NSDate *)relevancyDate;
@end

