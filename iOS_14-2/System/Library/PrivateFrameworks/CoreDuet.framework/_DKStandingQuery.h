/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

@class NSString;


@protocol _DKStandingQuery
@property (nonatomic,retain) NSString * queryIdentifier; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity; 
@required
-(id)fetchResult;
-(void)executeWithStorage:(id)arg1;
-(NSObject*<OS_xpc_object>)activity;
-(NSString *)queryIdentifier;
-(void)setActivity:(id)arg1;
-(void)setQueryIdentifier:(id)arg1;

@end

