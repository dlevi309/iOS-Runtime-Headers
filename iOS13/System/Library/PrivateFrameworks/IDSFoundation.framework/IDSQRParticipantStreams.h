/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSNumber, NSMutableArray;

@interface IDSQRParticipantStreams : NSObject {

	NSNumber* _participantID;
	NSMutableArray* _streamArray;
	BOOL _anyParticipant;
	BOOL _anyStream;

}

@property (readonly) NSNumber * participantID;                   //@synthesize participantID=_participantID - In the implementation block
@property (readonly) NSMutableArray * streamArray;               //@synthesize streamArray=_streamArray - In the implementation block
@property (nonatomic,readonly) BOOL anyParticipant;              //@synthesize anyParticipant=_anyParticipant - In the implementation block
@property (nonatomic,readonly) BOOL anyStream;                   //@synthesize anyStream=_anyStream - In the implementation block
+(id)streamWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(BOOL)arg3 anyStream:(BOOL)arg4 ;
-(id)description;
-(NSNumber *)participantID;
-(id)initWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(BOOL)arg3 anyStream:(BOOL)arg4 ;
-(NSMutableArray *)streamArray;
-(BOOL)anyParticipant;
-(BOOL)anyStream;
@end

