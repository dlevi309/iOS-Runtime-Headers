/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class NSDictionary, MPCMediaRemoteController, MPCPlayerPath, NSString;

@interface MPCPlayerCommandRequest : NSObject {

	unsigned _command;
	NSDictionary* _options;
	NSDictionary* _userInitiatedOptions;
	MPCMediaRemoteController* _controller;
	MPCPlayerPath* _playerPath;
	NSString* _label;

}

@property (nonatomic,readonly) unsigned command;                                   //@synthesize command=_command - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDictionary * userInitiatedOptions;                    //@synthesize userInitiatedOptions=_userInitiatedOptions - In the implementation block
@property (nonatomic,readonly) MPCMediaRemoteController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) MPCPlayerPath * playerPath;                         //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) NSString * label;                                       //@synthesize label=_label - In the implementation block
-(id)initWithMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 controller:(id)arg3 label:(id)arg4 ;
-(NSDictionary *)options;
-(void)setCommandOptionValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 playerPath:(id)arg3 label:(id)arg4 ;
-(MPCPlayerPath *)playerPath;
-(void)setUserInitiatedOptions:(NSDictionary *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSDictionary *)userInitiatedOptions;
-(MPCMediaRemoteController *)controller;
-(unsigned)command;
-(NSString *)label;
@end

