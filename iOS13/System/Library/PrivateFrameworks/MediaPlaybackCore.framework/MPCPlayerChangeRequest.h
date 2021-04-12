/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSArray;

@interface MPCPlayerChangeRequest : NSObject {

	unsigned long long _options;
	NSArray* _commands;

}

@property (nonatomic,retain) NSArray * commands;                      //@synthesize commands=_commands - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(void)performRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)performRequest:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
+(id)requestWithCommandRequests:(id)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCommandRequests:(id)arg1 ;
@end

