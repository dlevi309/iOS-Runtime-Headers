/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFOperation.h>

@class NSDictionary;

@interface WFUserPromptOperation : WFOperation {

	long long _result;
	NSDictionary* _userResponse;
	NSDictionary* _options;
	double _timeout;
	unsigned long long _flags;

}

@property (assign,nonatomic) long long result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSDictionary * userResponse;              //@synthesize userResponse=_userResponse - In the implementation block
+(id)sharedMapTable;
-(void)setResult:(long long)arg1 ;
-(void)start;
-(unsigned long long)flags;
-(void)setTimeout:(double)arg1 ;
-(NSDictionary *)options;
-(double)timeout;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(long long)result;
-(NSDictionary *)userResponse;
-(id)initWithOptions:(id)arg1 timeout:(double)arg2 flags:(unsigned long long)arg3 ;
-(id)initWithOptions:(id)arg1 timeout:(double)arg2 ;
-(void)_showPrompt;
-(void)_notification:(CFUserNotificationRef)arg1 didFinishWithResponse:(unsigned long long)arg2 ;
@end

