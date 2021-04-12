/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(MSASComment *)comment;
-(void)setComment:(MSASComment *)arg1 ;
-(int)deletionIndex;
-(void)setDeletionIndex:(int)arg1 ;
@end

