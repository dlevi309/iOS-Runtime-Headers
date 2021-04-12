/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSString;

@interface PSRegion : NSObject {

	NSString* _regionName;
	NSString* _regionCode;

}

@property (nonatomic,retain) NSString * regionName;              //@synthesize regionName=_regionName - In the implementation block
@property (nonatomic,retain) NSString * regionCode;              //@synthesize regionCode=_regionCode - In the implementation block
+(id)regionWithName:(id)arg1 code:(id)arg2 ;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionCode;
-(void)setRegionName:(NSString *)arg1 ;
-(NSString *)regionName;
@end

