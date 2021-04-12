/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isSystemGesturesAllowed,nonatomic,readonly) BOOL systemGesturesAllowed; 
@property (nonatomic,retain) NSArray * systemGestureLoggingOptions; 
-(void)setSystemGesturesAllowed:(BOOL)arg1 ;
-(BOOL)isSystemGesturesAllowed;
-(void)setSystemGestureLoggingOptions:(NSArray *)arg1 ;
-(NSArray *)systemGestureLoggingOptions;
-(void)_bindAndRegisterDefaults;
@end

