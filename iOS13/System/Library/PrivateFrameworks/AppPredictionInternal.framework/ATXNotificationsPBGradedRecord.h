/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ATXNotificationsPBContext, ATXNotificationsPBGrade;

@interface ATXNotificationsPBGradedRecord : PBCodable <NSCopying> {

	NSString* _bundleId;
	ATXNotificationsPBContext* _context;
	ATXNotificationsPBGrade* _grade;
	NSString* _message;
	NSString* _subtitle;
	int _suppActions;
	int _timezone;
	NSString* _title;
	NSString* _topic;
	NSString* _userid;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                                 //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) ATXNotificationsPBContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasSuppActions; 
@property (assign,nonatomic) int suppActions;                                  //@synthesize suppActions=_suppActions - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) int timezone;                                     //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) BOOL hasGrade; 
@property (nonatomic,retain) ATXNotificationsPBGrade * grade;                  //@synthesize grade=_grade - In the implementation block
@property (nonatomic,readonly) BOOL hasUserid; 
@property (nonatomic,retain) NSString * userid;                                //@synthesize userid=_userid - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(ATXNotificationsPBContext *)context;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setContext:(ATXNotificationsPBContext *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)topic;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)timezone;
-(void)setTopic:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)hasMessage;
-(BOOL)hasTitle;
-(void)setTimezone:(int)arg1 ;
-(BOOL)hasTimezone;
-(BOOL)hasContext;
-(ATXNotificationsPBGrade *)grade;
-(void)setGrade:(ATXNotificationsPBGrade *)arg1 ;
-(BOOL)hasBundleId;
-(BOOL)hasSubtitle;
-(void)setHasTimezone:(BOOL)arg1 ;
-(BOOL)hasGrade;
-(BOOL)hasTopic;
-(void)setSuppActions:(int)arg1 ;
-(void)setHasSuppActions:(BOOL)arg1 ;
-(BOOL)hasSuppActions;
-(int)suppActions;
-(BOOL)hasUserid;
-(NSString *)userid;
-(void)setUserid:(NSString *)arg1 ;
@end

