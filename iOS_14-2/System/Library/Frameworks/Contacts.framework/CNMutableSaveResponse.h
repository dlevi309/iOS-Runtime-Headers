/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

