/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

@class NSString;


@protocol HDSPAssertion <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
+(id)new;
+(id)assertionWithIdentifier:(id)arg1;
+(id)assertionWithIdentifier:(id)arg1 timeout:(double)arg2;
-(void)releaseAssertion;
-(id)init;
-(NSString *)identifier;

@end

