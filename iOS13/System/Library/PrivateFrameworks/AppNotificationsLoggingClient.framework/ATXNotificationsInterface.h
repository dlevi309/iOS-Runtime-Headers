/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppNotificationsLoggingClient.framework/AppNotificationsLoggingClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface ATXNotificationsInterface : NSObject <NSSecureCoding> {

	NSString* _sectionID;
	NSString* _topic;
	NSString* _title;
	NSString* _subtitle;
	NSString* _message;
	NSDate* _publicationDate;
	unsigned long long _numSuppActions;
	unsigned long long _feed;

}

@property (nonatomic,retain) NSString * sectionID;                           //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSString * topic;                               //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                            //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSDate * publicationDate;                       //@synthesize publicationDate=_publicationDate - In the implementation block
@property (assign,nonatomic) unsigned long long numSuppActions;              //@synthesize numSuppActions=_numSuppActions - In the implementation block
@property (assign,nonatomic) unsigned long long feed;                        //@synthesize feed=_feed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createArchivedMetadata:(id)arg1 categoryId:(id)arg2 title:(id)arg3 subtitle:(id)arg4 message:(id)arg5 numSuppActions:(id)arg6 feed:(unsigned long long)arg7 ;
+(void)stripContentInMetadata:(id)arg1 ;
+(id)getBundleIdFromMetadata:(id)arg1 ;
+(id)getTopicFromMetadata:(id)arg1 ;
+(id)getTitleFromMetadata:(id)arg1 ;
+(id)getSubtitleFromMetadata:(id)arg1 ;
+(id)getMessageFromMetadata:(id)arg1 ;
+(id)getNumSuppActionsFromMetadata:(id)arg1 ;
+(id)getTimezoneFromMetadata:(id)arg1 ;
+(unsigned long long)getFeedFromMetadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)subtitle;
-(unsigned long long)feed;
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(NSDate *)publicationDate;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(void)setFeed:(unsigned long long)arg1 ;
-(id)extractMetadata;
-(unsigned long long)numSuppActions;
-(void)setNumSuppActions:(unsigned long long)arg1 ;
@end

