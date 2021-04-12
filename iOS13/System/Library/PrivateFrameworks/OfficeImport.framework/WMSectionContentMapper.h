/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class WDText;

@interface WMSectionContentMapper : CMMapper {

	WDText* wdText;

}
-(id)paragraphAtIndex:(unsigned long long)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDText:(id)arg1 parent:(id)arg2 ;
-(void)updateTextFrameState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)mapTextFrameAt:(id)arg1 withState:(id)arg2 ;
-(void)mapTextFrameStyleTo:(id)arg1 withState:(id)arg2 ;
@end

