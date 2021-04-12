/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class PDSlide;

@interface PMSlideMapper : CMMapper {

	PDSlide* mSlide;
	CGRect mRect;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)styleMatrix;
-(void)mapDrawablesAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)slideRect;
-(id)defaultTheme;
-(id)initWithPDSlide:(id)arg1 slideRect:(CGRect)arg2 parent:(id)arg3 ;
-(void)mapMasterSlideAt:(id)arg1 withState:(id)arg2 ;
-(id)slideName;
-(void)mapBackgroundAt:(id)arg1 recursive:(BOOL)arg2 withState:(id)arg3 ;
@end

