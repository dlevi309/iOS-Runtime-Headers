/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class OADParagraphProperties, CMStyle;

@interface PMBulletMapper : CMMapper {

	OADParagraphProperties* mProperties;
	CMStyle* mStyle;
	int mFontSize;

}
+(id)stringForIndex:(unsigned long long)arg1 withFormat:(int)arg2 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)makeBulletWithListState:(id)arg1 ;
-(int)bulletSize;
-(id)bulletFontName;
-(void)mapBulletColorWithState:(id)arg1 ;
-(id)initWithOadProperties:(id)arg1 fontSize:(int)arg2 parent:(id)arg3 ;
@end

