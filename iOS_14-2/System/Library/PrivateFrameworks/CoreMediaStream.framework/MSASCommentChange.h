/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@class MSASComment;

@interface MSASCommentChange : NSObject {

	int _deletionIndex;
	int _type;
	MSASComment* _comment;

}

@property (nonatomic,retain) MSASComment * comment;              //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) int deletionIndex;                  //@synthesize deletionIndex=_deletionIndex - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
-(MSASComment *)comment;
-(void)setComment:(MSASComment *)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(int)deletionIndex;
-(void)setDeletionIndex:(int)arg1 ;
@end

