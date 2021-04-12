/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBacklightLevel:(long long)arg1 ;
-(NSString *)transitionReason;
-(void)endTransition;
-(void)beginTransition;
-(id)init;
-(long long)displayType;
-(void)setTransitionReason:(NSString *)arg1 ;
-(long long)backlightLevel;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(NSString *)name;
-(id)description;
-(long long)interfaceOrientation;
-(BOOL)isTransitioning;
-(id)initWithDisplayType:(long long)arg1 name:(id)arg2 ;
-(void)dealloc;
@end

