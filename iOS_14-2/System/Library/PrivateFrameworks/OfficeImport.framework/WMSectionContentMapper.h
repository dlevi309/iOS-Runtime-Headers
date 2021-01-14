/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

