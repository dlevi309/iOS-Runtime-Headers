/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSString, UIImage;

@interface NTKPeopleComplicationEntry : NTKTimelineEntryModel {

	NSString* _fullName;
	NSString* _abbreviation;
	UIImage* _profileImage;
	BOOL _isLocked;

}

@property (nonatomic,readonly) NSString * fullName;                  //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSString * abbreviation;              //@synthesize abbreviation=_abbreviation - In the implementation block
@property (nonatomic,readonly) UIImage * profileImage;               //@synthesize profileImage=_profileImage - In the implementation block
+(id)lockedEntry;
-(NSString *)abbreviation;
-(NSString *)fullName;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(id)initWithFullName:(id)arg1 abbreviation:(id)arg2 profileImage:(id)arg3 ;
-(UIImage *)profileImage;
@end

