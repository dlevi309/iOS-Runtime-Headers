/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@interface CNUICoreContactPropertyFilterBuilder : NSObject {

	BOOL _excludeNickname;
	BOOL _excludePhoto;
	BOOL _excludeNote;
	BOOL _excludeRelationships;

}

@property (assign,nonatomic) BOOL excludeNickname;                   //@synthesize excludeNickname=_excludeNickname - In the implementation block
@property (assign,nonatomic) BOOL excludePhoto;                      //@synthesize excludePhoto=_excludePhoto - In the implementation block
@property (assign,nonatomic) BOOL excludeNote;                       //@synthesize excludeNote=_excludeNote - In the implementation block
@property (assign,nonatomic) BOOL excludeRelationships;              //@synthesize excludeRelationships=_excludeRelationships - In the implementation block
+(id)whitelistedContactsFilterBuilder;
+(id)managedContactsFilterBuilder;
-(id)build;
-(void)setExcludeNickname:(BOOL)arg1 ;
-(void)setExcludePhoto:(BOOL)arg1 ;
-(void)setExcludeNote:(BOOL)arg1 ;
-(void)setExcludeRelationships:(BOOL)arg1 ;
-(BOOL)excludeNickname;
-(BOOL)excludePhoto;
-(BOOL)excludeNote;
-(BOOL)excludeRelationships;
@end

