/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol _GCLogicalDevice, NSCopyingNSObjectNSSecureCoding, _GCDriverClientInterface;
@class NSMutableArray, _GCHapticClientProxy;

@interface _GCHapticLogicalDevice : NSObject {

	id<_GCLogicalDevice> _logicalDevice;
	id<NSCopying><NSObject><NSSecureCoding> _identifier;
	NSMutableArray* _hapticClients;
	NSMutableArray* _hapticPlayers;
	float _prevSharpness[4];
	float _prevIntensity[4];
	id<_GCDriverClientInterface> _driver;
	_GCHapticClientProxy* _clientConnection;

}
-(id)initWithIdentifier:(id)arg1 clientConnection:(id)arg2 ;
-(void)registerHapticClient:(id)arg1 ;
-(void)unregisterHapticClient:(id)arg1 ;
-(BOOL)hasClients;
-(void)stopAllHaptics;
@end

