/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_dayNumberStringFromDate:(id)arg1 calendar:(id)arg2 ;
+(id)_dateNameFromDate:(id)arg1 calendar:(id)arg2 type:(long long)arg3 style:(long long)arg4 ;
+(id)_dayNumberStringFromDateComponents:(id)arg1 ;
+(id)_dateNameFromDateComponents:(id)arg1 type:(long long)arg2 style:(long long)arg3 ;
+(void)_drawGridInContext:(CGContextRef)arg1 size:(CGSize)arg2 ;
+(void)drawIconInContext:(CGContextRef)arg1 imageSize:(CGSize)arg2 scale:(double)arg3 iconBase:(id)arg4 dateComponents:(id)arg5 calendar:(id)arg6 format:(long long)arg7 ;
+(id)_iconImageWithSize:(CGSize)arg1 scale:(double)arg2 drawBlock:(/*^block*/id)arg3 ;
+(id)_whiteImageWithSize:(CGSize)arg1 scale:(double)arg2 ;
+(void)_drawIconInContext:(CGContextRef)arg1 imageSize:(CGSize)arg2 scale:(double)arg3 iconBase:(id)arg4 calendar:(id)arg5 dayNumberString:(id)arg6 dateNameBlock:(/*^block*/id)arg7 dateNameFormatType:(long long)arg8 showGrid:(BOOL)arg9 ;
-(CGImageRef)iconImageWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 size:(CGSize)arg4 scale:(double)arg5 ;
@end

