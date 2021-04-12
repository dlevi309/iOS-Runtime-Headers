/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
*/


@protocol FKFriendGroupDelegate;
@class NSMutableArray, NSString;

@interface FKFriendGroup : NSObject {

	NSMutableArray* _friendsManager;
	unsigned long long _groupSize;
	NSString* _title;
	unsigned long long _selectedPosition;
	id<FKFriendGroupDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FKFriendGroupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long selectedPosition;                    //@synthesize selectedPosition=_selectedPosition - In the implementation block
-(id)friends;
-(BOOL)isFull;
-(id)init;
-(id<FKFriendGroupDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)count;
-(void)setDelegate:(id<FKFriendGroupDelegate>)arg1 ;
-(void)setFriends:(id)arg1 ;
-(NSString *)title;
-(id)initWithDelegate:(id)arg1 groupSize:(unsigned long long)arg2 ;
-(void)addFriend:(id)arg1 error:(unsigned*)arg2 ;
-(void)removeFriendAtPosition:(unsigned long long)arg1 ;
-(long long)_firstEmptyPosition;
-(id)initWithGroupSize:(unsigned long long)arg1 ;
-(void)setFriend:(id)arg1 atPosition:(unsigned long long)arg2 error:(unsigned*)arg3 ;
-(id)friendAtPosition:(unsigned long long)arg1 ;
-(unsigned long long)positionOfFriend:(id)arg1 ;
-(BOOL)containsFriend:(id)arg1 ;
-(id)displayNameForGroupWithSeparator:(id)arg1 ;
-(unsigned long long)selectedPosition;
-(void)setSelectedPosition:(unsigned long long)arg1 ;
@end

