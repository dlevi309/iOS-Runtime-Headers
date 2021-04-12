/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@protocol BSInvalidatable;
@class FBMainDisplayLayoutPublisher, NSString;

@interface FBDisplayLayoutTransition : NSObject {

	FBMainDisplayLayoutPublisher* _publisher;
	NSString* _name;
	NSString* _transitionReason;
	long long _displayType;
	id<BSInvalidatable> _transition;
	long long _interfaceOrientation;
	long long _backlightLevel;

}

@property (nonatomic,readonly) long long displayType;                                  //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,copy) NSString * transitionReason;                                //@synthesize transitionReason=_transitionReason - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                           //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long backlightLevel;                                 //@synthesize backlightLevel=_backlightLevel - In the implementation block
+(id)layoutForDisplayType:(long long)arg1 ;
+(void)flushLayoutForDisplayType:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(long long)displayType;
-(long long)interfaceOrientation;
-(void)beginTransition;
-(void)endTransition;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(BOOL)isTransitioning;
-(void)setBacklightLevel:(long long)arg1 ;
-(long long)backlightLevel;
-(id)initWithDisplayType:(long long)arg1 name:(id)arg2 ;
-(NSString *)transitionReason;
-(void)setTransitionReason:(NSString *)arg1 ;
@end

