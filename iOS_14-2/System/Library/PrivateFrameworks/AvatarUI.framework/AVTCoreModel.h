/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSArray, AVTEditingModelColors;

@interface AVTCoreModel : NSObject {

	NSArray* _groups;
	AVTEditingModelColors* _colors;
	unsigned long long _platform;

}

@property (nonatomic,copy,readonly) NSArray * groups;                            //@synthesize groups=_groups - In the implementation block
@property (nonatomic,copy,readonly) AVTEditingModelColors * colors;              //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) unsigned long long platform;                      //@synthesize platform=_platform - In the implementation block
-(AVTEditingModelColors *)colors;
-(unsigned long long)platform;
-(NSArray *)groups;
-(id)description;
-(id)initWithGroups:(id)arg1 colors:(id)arg2 forPlatform:(unsigned long long)arg3 ;
@end

