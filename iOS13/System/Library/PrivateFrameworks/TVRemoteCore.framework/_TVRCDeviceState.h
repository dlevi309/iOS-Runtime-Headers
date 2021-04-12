/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSSet, _TVRCKeyboardState, NSError;

@interface _TVRCDeviceState : NSObject <NSSecureCoding> {

	BOOL _supportsTouchEvents;
	BOOL _paired;
	long long _connectionState;
	unsigned long long _pairingCapability;
	long long _connectionType;
	NSString* _name;
	NSString* _identifier;
	NSDictionary* _alternateIdentifiers;
	NSString* _model;
	NSSet* _supportedButtons;
	_TVRCKeyboardState* _keyboardState;
	long long _disconnectReason;
	NSError* _disconnectError;

}

@property (assign,nonatomic) long long connectionState;                         //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) unsigned long long pairingCapability;              //@synthesize pairingCapability=_pairingCapability - In the implementation block
@property (assign,nonatomic) long long connectionType;                          //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL supportsTouchEvents;                          //@synthesize supportsTouchEvents=_supportsTouchEvents - In the implementation block
@property (assign,getter=isPaired,nonatomic) BOOL paired;                       //@synthesize paired=_paired - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * alternateIdentifiers;                 //@synthesize alternateIdentifiers=_alternateIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSSet * supportedButtons;                            //@synthesize supportedButtons=_supportedButtons - In the implementation block
@property (nonatomic,copy) _TVRCKeyboardState * keyboardState;                  //@synthesize keyboardState=_keyboardState - In the implementation block
@property (assign,nonatomic) long long disconnectReason;                        //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (nonatomic,copy) NSError * disconnectError;                           //@synthesize disconnectError=_disconnectError - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deviceStateFromDevice:(id)arg1 ;
+(id)setOfStatesFromDevices:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)connectionType;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(long long)connectionState;
-(void)setConnectionType:(long long)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(BOOL)isPaired;
-(_TVRCKeyboardState *)keyboardState;
-(void)setKeyboardState:(_TVRCKeyboardState *)arg1 ;
-(void)setConnectionState:(long long)arg1 ;
-(NSSet *)supportedButtons;
-(BOOL)supportsTouchEvents;
-(NSDictionary *)alternateIdentifiers;
-(unsigned long long)pairingCapability;
-(void)setPairingCapability:(unsigned long long)arg1 ;
-(void)setSupportsTouchEvents:(BOOL)arg1 ;
-(void)setAlternateIdentifiers:(NSDictionary *)arg1 ;
-(void)setSupportedButtons:(NSSet *)arg1 ;
-(long long)disconnectReason;
-(void)setDisconnectReason:(long long)arg1 ;
-(NSError *)disconnectError;
-(void)setDisconnectError:(NSError *)arg1 ;
@end

