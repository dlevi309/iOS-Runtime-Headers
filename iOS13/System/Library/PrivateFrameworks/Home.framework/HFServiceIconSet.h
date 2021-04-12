/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFIconDescriptor;
@class NSSet;

@interface HFServiceIconSet : NSObject {

	NSSet* _allIcons;
	id<HFIconDescriptor> _defaultIcon;

}

@property (nonatomic,readonly) NSSet * allIcons;                              //@synthesize allIcons=_allIcons - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> defaultIcon;              //@synthesize defaultIcon=_defaultIcon - In the implementation block
+(id)setWithDefaultIcon:(id)arg1 ;
+(id)setWithDefaultIcon:(id)arg1 alternateIcons:(id)arg2 ;
+(id)placeholderIconSet;
+(id)setWithImageIdentifier:(id)arg1 ;
-(NSSet *)allIcons;
-(id<HFIconDescriptor>)defaultIcon;
@end

