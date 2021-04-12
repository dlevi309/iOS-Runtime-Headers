/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <ClockKit/CLKImageProvider.h>

@class UIImage, NSString;

@interface NTKPeopleComplicationImageProvider : CLKImageProvider {

	double _borderWidth;
	double _fontSize;
	UIImage* _profileImage;
	NSString* _fullName;
	NSString* _nameAbbreviation;

}

@property (assign) double borderWidth;                                 //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign) double fontSize;                                    //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,retain) UIImage * profileImage;                   //@synthesize profileImage=_profileImage - In the implementation block
@property (nonatomic,retain) NSString * fullName;                      //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * nameAbbreviation;              //@synthesize nameAbbreviation=_nameAbbreviation - In the implementation block
-(double)fontSize;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(id)init;
-(void)setFontSize:(double)arg1 ;
-(double)borderWidth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(UIImage *)profileImage;
-(NSString *)nameAbbreviation;
-(void)setProfileImage:(UIImage *)arg1 ;
-(void)setNameAbbreviation:(NSString *)arg1 ;
@end

