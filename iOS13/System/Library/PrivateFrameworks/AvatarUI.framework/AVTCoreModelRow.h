/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSString, AVTCoreModelRowOptions, NSOrderedSet;

@interface AVTCoreModelRow : NSObject {

	NSString* _identifier;
	NSString* _title;
	AVTCoreModelRowOptions* _options;
	NSOrderedSet* _representedTags;

}

@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) AVTCoreModelRowOptions * options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * representedTags;              //@synthesize representedTags=_representedTags - In the implementation block
-(id)description;
-(AVTCoreModelRowOptions *)options;
-(NSString *)identifier;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 representedTags:(id)arg2 options:(id)arg3 ;
-(NSOrderedSet *)representedTags;
-(id)initWithTitle:(id)arg1 representedTags:(id)arg2 options:(id)arg3 identifier:(id)arg4 ;
@end

