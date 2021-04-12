/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSNumber;

@interface SBStateDumpDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,getter=isRemoteDumpEnabled,nonatomic) BOOL remoteDumpEnabled; 
@property (nonatomic,retain) NSNumber * remoteDumpTimeout; 
-(void)setRemoteDumpTimeout:(NSNumber *)arg1 ;
-(NSNumber *)remoteDumpTimeout;
-(void)setRemoteDumpEnabled:(BOOL)arg1 ;
-(BOOL)isRemoteDumpEnabled;
-(void)_bindAndRegisterDefaults;
@end

