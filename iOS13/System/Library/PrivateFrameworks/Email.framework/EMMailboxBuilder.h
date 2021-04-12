/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class NSString, EMMailbox;


@protocol EMMailboxBuilder <NSObject>
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) BOOL canContainMessages; 
@property (assign,nonatomic) BOOL canArchive; 
@property (assign,nonatomic,__weak) EMMailbox * parent; 
@property (assign,nonatomic) BOOL descriptionUsesRealName; 
@required
-(NSString *)name;
-(EMMailbox *)parent;
-(long long)type;
-(void)setType:(long long)arg1;
-(void)setParent:(id)arg1;
-(void)setName:(id)arg1;
-(BOOL)canContainMessages;
-(void)setCanContainMessages:(BOOL)arg1;
-(void)setCanArchive:(BOOL)arg1;
-(BOOL)canArchive;
-(BOOL)descriptionUsesRealName;
-(void)setDescriptionUsesRealName:(BOOL)arg1;

@end

