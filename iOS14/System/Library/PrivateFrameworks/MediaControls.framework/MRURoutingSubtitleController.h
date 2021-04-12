/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol MRURoutingSubtitleControllerDelegate;
@class NSMutableDictionary, NSString;

@interface MRURoutingSubtitleController : NSObject {

	long long _state;
	id<MRURoutingSubtitleControllerDelegate> _delegate;
	NSMutableDictionary* _storage;

}

@property (nonatomic,retain) NSMutableDictionary * storage;                                         //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) long long state;                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<MRURoutingSubtitleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,readonly) BOOL canTransitionToNextState; 
@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,readonly) long long accessory; 
-(BOOL)hasText;
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id<MRURoutingSubtitleControllerDelegate>)delegate;
-(NSMutableDictionary *)storage;
-(long long)accessory;
-(void)prepareForReuse;
-(void)setDelegate:(id<MRURoutingSubtitleControllerDelegate>)arg1 ;
-(id)description;
-(NSString *)text;
-(long long)state;
-(long long)nextAvailableTextState;
-(void)setText:(id)arg1 forState:(long long)arg2 accessory:(long long)arg3 ;
-(void)transitionToNextAvailableState;
-(BOOL)canTransitionToNextState;
-(void)setText:(id)arg1 forState:(long long)arg2 ;
@end

