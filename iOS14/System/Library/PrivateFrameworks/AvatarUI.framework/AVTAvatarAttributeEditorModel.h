/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSArray;

@interface AVTAvatarAttributeEditorModel : NSObject {

	NSArray* _categories;

}

@property (nonatomic,readonly) NSArray * categories;              //@synthesize categories=_categories - In the implementation block
+(id)diffOfSections:(id)arg1 fromSections:(id)arg2 ;
+(id)diffOfSectionItems:(id)arg1 fromSectionItems:(id)arg2 ;
-(NSArray *)categories;
-(id)initWithCategories:(id)arg1 ;
-(id)differenceFromModel:(id)arg1 ;
@end

