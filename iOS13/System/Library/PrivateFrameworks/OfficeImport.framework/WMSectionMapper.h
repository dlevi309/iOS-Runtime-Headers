/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class WDSection;

@interface WMSectionMapper : CMMapper {

	WDSection* wdSection;
	float mTopMargin;
	float mLeftMargin;
	BOOL mBreakAtStart;
	BOOL mBreakAtEnd;
	BOOL mIsTitlePage;

}
+(BOOL)isContentEmpty:(id)arg1 ;
-(void)setLeftMargin:(float)arg1 ;
-(void)setTopMargin:(float)arg1 ;
-(float)topMargin;
-(float)leftMargin;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDSection:(id)arg1 breakAtStart:(BOOL)arg2 breakAtEnd:(BOOL)arg3 parent:(id)arg4 ;
-(void)MapSectionStyleAt:(id)arg1 ;
-(void)mapHeaderAt:(id)arg1 withState:(id)arg2 ;
-(void)mapFooterAt:(id)arg1 withState:(id)arg2 ;
@end

