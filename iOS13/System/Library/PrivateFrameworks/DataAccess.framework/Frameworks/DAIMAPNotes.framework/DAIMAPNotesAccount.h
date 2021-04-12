/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DAIMAPNotes
*/

#import <DataAccess/DAAccount.h>

@interface DAIMAPNotesAccount : DAAccount {

	int _imapNotesAccountVersion;

}

@property (assign,setter=setIMAPNotesAccountVersion:,nonatomic) int imapNotesAccountVersion;              //@synthesize imapNotesAccountVersion=_imapNotesAccountVersion - In the implementation block
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)onBehalfOfBundleIdentifier;
-(int)imapNotesAccountVersion;
-(void)setIMAPNotesAccountVersion:(int)arg1 ;
@end

