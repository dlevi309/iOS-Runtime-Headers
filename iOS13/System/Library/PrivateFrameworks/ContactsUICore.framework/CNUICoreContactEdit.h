/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class CNContact;

@interface CNUICoreContactEdit : NSObject {

	CNContact* _original;
	CNContact* _modified;

}

@property (nonatomic,readonly) CNContact * original;                        //@synthesize original=_original - In the implementation block
@property (nonatomic,readonly) CNContact * modified;                        //@synthesize modified=_modified - In the implementation block
@property (nonatomic,readonly) BOOL originalAndModifiedDiffer; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CNContact *)original;
-(id)initWithContact:(id)arg1 ;
-(CNContact *)modified;
-(id)initWithOriginalContact:(id)arg1 modifiedContact:(id)arg2 ;
-(id)editBySettingModifiedContact:(id)arg1 ;
-(BOOL)originalAndModifiedDiffer;
-(BOOL)modifiesContact:(id)arg1 ;
@end

