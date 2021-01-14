/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HLPAnalyticsEvent.h>

@class NSString;

@interface HLPAnalyticsEventContentViewed : HLPAnalyticsEvent {

	NSString* _externalURLString;
	NSString* _fromTopicID;
	NSString* _topicID;
	NSString* _source;
	NSString* _viewMode;
	unsigned long long _viewNum;

}

@property (nonatomic,retain) NSString * topicID;                        //@synthesize topicID=_topicID - In the implementation block
@property (nonatomic,retain) NSString * source;                         //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * viewMode;                       //@synthesize viewMode=_viewMode - In the implementation block
@property (assign,nonatomic) unsigned long long viewNum;                //@synthesize viewNum=_viewNum - In the implementation block
@property (nonatomic,retain) NSString * externalURLString;              //@synthesize externalURLString=_externalURLString - In the implementation block
@property (nonatomic,retain) NSString * fromTopicID;                    //@synthesize fromTopicID=_fromTopicID - In the implementation block
+(id)eventWithTopicID:(id)arg1 source:(id)arg2 interfaceStyle:(long long)arg3 ;
-(NSString *)externalURLString;
-(void)log;
-(id)eventName;
-(void)setExternalURLString:(NSString *)arg1 ;
-(void)setTopicID:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setViewMode:(NSString *)arg1 ;
-(NSString *)topicID;
-(NSString *)viewMode;
-(unsigned long long)viewNum;
-(NSString *)source;
-(void)setFromTopicID:(NSString *)arg1 ;
-(id)_initWithTopicID:(id)arg1 source:(id)arg2 interfaceStyle:(long long)arg3 ;
-(id)caRepresentation;
-(NSString *)fromTopicID;
-(void)setViewNum:(unsigned long long)arg1 ;
@end

