/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class LTSchemaTask, NSString, NSData;

@interface LTSchemaSafariFeedbackEvent : PBCodable {

	LTSchemaTask* _task;
	NSString* _sessionID;
	NSString* _userFeedbackContentSource;
	NSString* _userFeedbackContentTarget;
	BOOL _hasTask;
	BOOL _hasSessionID;
	BOOL _hasUserFeedbackContentSource;
	BOOL _hasUserFeedbackContentTarget;

}

@property (nonatomic,retain) LTSchemaTask * task;                             //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) BOOL hasTask;                                    //@synthesize hasTask=_hasTask - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                              //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID;                               //@synthesize hasSessionID=_hasSessionID - In the implementation block
@property (nonatomic,copy) NSString * userFeedbackContentSource;              //@synthesize userFeedbackContentSource=_userFeedbackContentSource - In the implementation block
@property (assign,nonatomic) BOOL hasUserFeedbackContentSource;               //@synthesize hasUserFeedbackContentSource=_hasUserFeedbackContentSource - In the implementation block
@property (nonatomic,copy) NSString * userFeedbackContentTarget;              //@synthesize userFeedbackContentTarget=_userFeedbackContentTarget - In the implementation block
@property (assign,nonatomic) BOOL hasUserFeedbackContentTarget;               //@synthesize hasUserFeedbackContentTarget=_hasUserFeedbackContentTarget - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(LTSchemaTask *)task;
-(NSData *)jsonData;
-(void)setTask:(LTSchemaTask *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasTask;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTask:(BOOL)arg1 ;
-(void)setUserFeedbackContentSource:(NSString *)arg1 ;
-(void)setUserFeedbackContentTarget:(NSString *)arg1 ;
-(NSString *)userFeedbackContentSource;
-(NSString *)userFeedbackContentTarget;
-(BOOL)hasUserFeedbackContentSource;
-(BOOL)hasUserFeedbackContentTarget;
-(void)setHasUserFeedbackContentSource:(BOOL)arg1 ;
-(void)setHasUserFeedbackContentTarget:(BOOL)arg1 ;
@end

