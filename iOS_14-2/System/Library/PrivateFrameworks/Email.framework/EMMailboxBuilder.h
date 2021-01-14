/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class EMMailbox;


@protocol EMMailboxBuilder <NSObject>
@property (assign,nonatomic) BOOL canContainMessages; 
@property (assign,nonatomic,__weak) EMMailbox * parent; 
@property (assign,nonatomic) BOOL descriptionUsesRealName; 
@required
-(EMMailbox *)parent;
-(void)setParent:(id)arg1;
-(BOOL)descriptionUsesRealName;
-(void)setDescriptionUsesRealName:(BOOL)arg1;
-(BOOL)canContainMessages;
-(void)setCanContainMessages:(BOOL)arg1;

@end

