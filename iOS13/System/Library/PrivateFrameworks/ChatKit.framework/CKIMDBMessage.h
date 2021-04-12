/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDBMessage.h>

@class NSString;

@interface CKIMDBMessage : CKDBMessage {

	int _personID;
	NSString* _personName;

}

@property (nonatomic,retain) NSString * personName;              //@synthesize personName=_personName - In the implementation block
@property (assign,nonatomic) int personID;                       //@synthesize personID=_personID - In the implementation block
-(void)dealloc;
-(int)personID;
-(void)setPersonID:(int)arg1 ;
-(NSString *)personName;
-(id)initWithRecordID:(long long)arg1 ;
-(void)resetIMPerson;
-(void)setPersonName:(NSString *)arg1 ;
-(void)markAsRead;
@end

