/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSString, NSDictionary, NSArray;

@interface AVTCoreModelGroup : NSObject {

	NSString* _name;
	NSDictionary* _symbolNames;
	NSArray* _categories;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * symbolNames;              //@synthesize symbolNames=_symbolNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categories;                    //@synthesize categories=_categories - In the implementation block
-(NSArray *)categories;
-(NSString *)name;
-(NSDictionary *)symbolNames;
-(id)description;
-(id)initWithName:(id)arg1 symbolNames:(id)arg2 categories:(id)arg3 ;
@end

