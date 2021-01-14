/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSArray, NSDictionary;

@interface AVTAvatarAttributeEditorModelDiff : NSObject {

	NSArray* _sectionDiffs;
	NSDictionary* _sectionItemDiffs;

}

@property (nonatomic,readonly) NSArray * sectionDiffs;                       //@synthesize sectionDiffs=_sectionDiffs - In the implementation block
@property (nonatomic,readonly) NSDictionary * sectionItemDiffs;              //@synthesize sectionItemDiffs=_sectionItemDiffs - In the implementation block
-(id)initWithSectionDiffs:(id)arg1 sectionItemDiffs:(id)arg2 ;
-(NSArray *)sectionDiffs;
-(NSDictionary *)sectionItemDiffs;
@end

