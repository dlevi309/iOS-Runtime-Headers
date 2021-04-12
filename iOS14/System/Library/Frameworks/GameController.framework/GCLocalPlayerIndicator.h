/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/GCControllerPlayerIndicator.h>

@protocol GCControllerPlayerIndicator;
@class NSString;

@interface GCLocalPlayerIndicator : NSObject <GCControllerPlayerIndicator> {

	long long _playerIndex;
	id<GCControllerPlayerIndicator> _systemPlayerIndicatorProxy;

}

@property (nonatomic,readonly) id<GCControllerPlayerIndicator> systemPlayerIndicatorProxy;              //@synthesize systemPlayerIndicatorProxy=_systemPlayerIndicatorProxy - In the implementation block
@property (assign) long long playerIndex;                                                               //@synthesize playerIndex=_playerIndex - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setController:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setPlayerIndex:(long long)arg1 ;
-(long long)playerIndex;
-(id)initWithInitialValue:(long long)arg1 systemPlayerIndicatorProxy:(id)arg2 ;
-(id<GCControllerPlayerIndicator>)systemPlayerIndicatorProxy;
@end

