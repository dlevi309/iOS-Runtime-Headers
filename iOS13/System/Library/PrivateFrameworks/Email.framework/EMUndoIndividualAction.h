/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, ECMessageFlagChange, NSURL;

@interface EMUndoIndividualAction : NSObject <NSSecureCoding> {

	long long _actionType;
	NSArray* _messageDatabaseIDs;
	ECMessageFlagChange* _flagChange;
	NSURL* _destinationMailboxURL;

}

@property (assign,nonatomic) long long actionType;                          //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSArray * messageDatabaseIDs;                  //@synthesize messageDatabaseIDs=_messageDatabaseIDs - In the implementation block
@property (nonatomic,retain) ECMessageFlagChange * flagChange;              //@synthesize flagChange=_flagChange - In the implementation block
@property (nonatomic,retain) NSURL * destinationMailboxURL;                 //@synthesize destinationMailboxURL=_destinationMailboxURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)actionType;
-(void)setActionType:(long long)arg1 ;
-(ECMessageFlagChange *)flagChange;
-(NSURL *)destinationMailboxURL;
-(void)setFlagChange:(ECMessageFlagChange *)arg1 ;
-(void)setDestinationMailboxURL:(NSURL *)arg1 ;
-(NSArray *)messageDatabaseIDs;
-(void)setMessageDatabaseIDs:(NSArray *)arg1 ;
@end

