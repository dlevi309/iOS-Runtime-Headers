/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNSaveResponse.h>

@interface CNMutableSaveResponse : CNSaveResponse

@property (assign) BOOL didAffectMeCard; 
+(BOOL)supportsSecureCoding;
-(void)setDidAffectMeCard:(BOOL)arg1 ;
-(void)setContainerSnapshot:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setContactSnapshot:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setGroupSnapshot:(id)arg1 forIndexPath:(id)arg2 ;
@end

