/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNContact *)modified;
-(id)description;
-(id)initWithContact:(id)arg1 ;
-(CNContact *)original;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOriginalContact:(id)arg1 modifiedContact:(id)arg2 ;
-(id)editBySettingModifiedContact:(id)arg1 ;
-(BOOL)originalAndModifiedDiffer;
-(BOOL)modifiesContact:(id)arg1 ;
@end

