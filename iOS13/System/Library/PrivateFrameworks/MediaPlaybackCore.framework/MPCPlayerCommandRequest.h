/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)options;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(MPCMediaRemoteController *)controller;
-(unsigned)command;
-(MPCPlayerPath *)playerPath;
-(id)initWithMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 playerPath:(id)arg3 label:(id)arg4 ;
-(id)initWithMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 controller:(id)arg3 label:(id)arg4 ;
-(void)setCommandOptionValue:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)userInitiatedOptions;
-(void)setUserInitiatedOptions:(NSDictionary *)arg1 ;
@end

