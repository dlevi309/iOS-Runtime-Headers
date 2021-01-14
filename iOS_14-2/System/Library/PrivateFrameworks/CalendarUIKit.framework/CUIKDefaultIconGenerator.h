/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CalendarUIKit-Structs.h>
#import <libobjc.A.dylib/CUIKIconGenerator.h>

@class NSString;

@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_drawIconInContext:(CGContextRef)arg1 imageSize:(CGSize)arg2 scale:(double)arg3 iconBase:(id)arg4 dateComponents:(id)arg5 calendar:(id)arg6 format:(long long)arg7 ;
+(id)_dateNameFromDateComponents:(id)arg1 calendar:(id)arg2 type:(long long)arg3 ;
+(id)_dayNumberStringFromDateComponents:(id)arg1 calendar:(id)arg2 ;
+(id)_whiteImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)iconImageWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 size:(CGSize)arg4 scale:(double)arg5 ;
@end

