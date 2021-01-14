/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDate;

@interface CKSceneDelegateState : NSObject <NSSecureCoding> {

	BOOL _composingNewMessage;
	BOOL _showingInbox;
	NSArray* _unreadLastMessages;
	NSString* _groupID;
	NSDate* _date;
	unsigned long long _filterMode;

}

@property (assign,nonatomic) BOOL composingNewMessage;                   //@synthesize composingNewMessage=_composingNewMessage - In the implementation block
@property (nonatomic,retain) NSString * groupID;                         //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSArray * unreadLastMessages;               //@synthesize unreadLastMessages=_unreadLastMessages - In the implementation block
@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long filterMode;              //@synthesize filterMode=_filterMode - In the implementation block
@property (assign,nonatomic) BOOL showingInbox;                          //@synthesize showingInbox=_showingInbox - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unarchivingClasses;
-(id)init;
-(NSString *)groupID;
-(NSArray *)unreadLastMessages;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(BOOL)showingInbox;
-(void)setShowingInbox:(BOOL)arg1 ;
-(void)setUnreadLastMessages:(NSArray *)arg1 ;
-(void)setComposingNewMessage:(BOOL)arg1 ;
-(BOOL)composingNewMessage;
-(void)setDate:(NSDate *)arg1 ;
-(void)setFilterMode:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithUnreadMessages:(id)arg1 groupID:(id)arg2 composingNewMessage:(BOOL)arg3 filterMode:(unsigned long long)arg4 showingInbox:(BOOL)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)filterMode;
@end

