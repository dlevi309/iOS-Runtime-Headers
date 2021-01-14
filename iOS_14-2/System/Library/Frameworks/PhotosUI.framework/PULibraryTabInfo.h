/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSString;

@interface PULibraryTabInfo : NSObject {

	int _contentMode;
	NSString* _labelKey;
	NSString* _iconName;

}

@property (nonatomic,readonly) NSString * labelKey;                       //@synthesize labelKey=_labelKey - In the implementation block
@property (nonatomic,readonly) NSString * iconName;                       //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,readonly) NSString * landscapeIconName; 
@property (nonatomic,readonly) int contentMode;                           //@synthesize contentMode=_contentMode - In the implementation block
+(id)tabInfoWithLabelKey:(id)arg1 iconName:(id)arg2 contentMode:(int)arg3 ;
-(int)contentMode;
-(NSString *)landscapeIconName;
-(NSString *)labelKey;
-(id)initWithLabelKey:(id)arg1 iconName:(id)arg2 contentMode:(int)arg3 ;
-(NSString *)iconName;
@end

