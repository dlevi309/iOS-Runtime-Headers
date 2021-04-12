/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardHome/SBHClockApplicationIconImageView.h>
#import <libobjc.A.dylib/SBDateTimeOverrideObserver.h>

@class NSString;

@interface SBClockApplicationIconImageView : SBHClockApplicationIconImageView <SBDateTimeOverrideObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(void)setIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 ;
@end

