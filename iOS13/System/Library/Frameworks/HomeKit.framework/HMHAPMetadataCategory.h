/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@class NSNumber, NSString;

@interface HMHAPMetadataCategory : NSObject {

	NSNumber* _categoryNumber;
	NSString* _categoryType;
	NSString* _categoryDescription;

}

@property (nonatomic,retain) NSNumber * categoryNumber;                   //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (nonatomic,retain) NSString * categoryType;                     //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,retain) NSString * categoryDescription;              //@synthesize categoryDescription=_categoryDescription - In the implementation block
-(NSString *)categoryType;
-(void)setCategoryType:(NSString *)arg1 ;
-(NSString *)categoryDescription;
-(NSNumber *)categoryNumber;
-(void)setCategoryNumber:(NSNumber *)arg1 ;
-(void)setCategoryDescription:(NSString *)arg1 ;
@end

