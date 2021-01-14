/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <BaseBoard/BSAction.h>

@class NSString, NSURL;

@interface SBSRelaunchAction : BSAction

@property (nonatomic,copy,readonly) NSString * reason; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,retain,readonly) NSURL * targetURL; 
+(id)actionWithReason:(id)arg1 options:(unsigned long long)arg2 targetURL:(id)arg3 ;
-(unsigned long long)options;
-(NSString *)reason;
-(NSURL *)targetURL;
-(id)initWithReason:(id)arg1 options:(unsigned long long)arg2 targetURL:(id)arg3 ;
@end

