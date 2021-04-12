/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)regionCode;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionName;
-(void)setRegionName:(NSString *)arg1 ;
@end

