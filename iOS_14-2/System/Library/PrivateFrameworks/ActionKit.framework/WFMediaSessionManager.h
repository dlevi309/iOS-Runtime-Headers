/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class AMSMediaTask, AMSBag, NSString;

@interface WFMediaSessionManager : NSObject {

	AMSMediaTask* _task;
	AMSBag* _bag;
	NSString* _clientIdentifier;
	NSString* _clientVersion;

}

@property (nonatomic,readonly) AMSMediaTask * task;                           //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) AMSBag * bag;                                  //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientVersion;                 //@synthesize clientVersion=_clientVersion - In the implementation block
-(AMSMediaTask *)task;
-(id)init;
-(NSString *)clientVersion;
-(AMSBag *)bag;
-(NSString *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 ;
-(void)lookupMediaType:(long long)arg1 withIdentifiers:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

