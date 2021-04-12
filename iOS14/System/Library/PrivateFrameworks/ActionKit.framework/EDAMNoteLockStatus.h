/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSArray, NSDictionary;

@interface EDAMNoteLockStatus : FATObject {

	NSNumber* _noteUpdateSequenceNumber;
	NSNumber* _lockHolderUserId;
	NSNumber* _lockRenewBy;
	NSArray* _viewingUserIds;
	NSNumber* _viewIdleExpiration;
	NSDictionary* _unknownUsers;
	NSNumber* _currentTime;

}

@property (nonatomic,retain) NSNumber * noteUpdateSequenceNumber;              //@synthesize noteUpdateSequenceNumber=_noteUpdateSequenceNumber - In the implementation block
@property (nonatomic,retain) NSNumber * lockHolderUserId;                      //@synthesize lockHolderUserId=_lockHolderUserId - In the implementation block
@property (nonatomic,retain) NSNumber * lockRenewBy;                           //@synthesize lockRenewBy=_lockRenewBy - In the implementation block
@property (nonatomic,retain) NSArray * viewingUserIds;                         //@synthesize viewingUserIds=_viewingUserIds - In the implementation block
@property (nonatomic,retain) NSNumber * viewIdleExpiration;                    //@synthesize viewIdleExpiration=_viewIdleExpiration - In the implementation block
@property (nonatomic,retain) NSDictionary * unknownUsers;                      //@synthesize unknownUsers=_unknownUsers - In the implementation block
@property (nonatomic,retain) NSNumber * currentTime;                           //@synthesize currentTime=_currentTime - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setCurrentTime:(NSNumber *)arg1 ;
-(NSNumber *)currentTime;
-(NSNumber *)noteUpdateSequenceNumber;
-(void)setNoteUpdateSequenceNumber:(NSNumber *)arg1 ;
-(NSNumber *)lockHolderUserId;
-(void)setLockHolderUserId:(NSNumber *)arg1 ;
-(NSNumber *)lockRenewBy;
-(void)setLockRenewBy:(NSNumber *)arg1 ;
-(NSArray *)viewingUserIds;
-(void)setViewingUserIds:(NSArray *)arg1 ;
-(NSNumber *)viewIdleExpiration;
-(void)setViewIdleExpiration:(NSNumber *)arg1 ;
-(NSDictionary *)unknownUsers;
-(void)setUnknownUsers:(NSDictionary *)arg1 ;
@end

