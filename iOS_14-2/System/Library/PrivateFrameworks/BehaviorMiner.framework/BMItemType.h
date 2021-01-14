/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <BehaviorMiner/BehaviorMiner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _DKEventStream;

@interface BMItemType : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	Class _valueClass;
	long long _edge;
	_DKEventStream* _eventStream;
	/*^block*/id _valueExtractBlock;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) Class valueClass;                          //@synthesize valueClass=_valueClass - In the implementation block
@property (assign,nonatomic) long long edge;                            //@synthesize edge=_edge - In the implementation block
@property (nonatomic,retain) _DKEventStream * eventStream;              //@synthesize eventStream=_eventStream - In the implementation block
@property (nonatomic,copy) id valueExtractBlock;                        //@synthesize valueExtractBlock=_valueExtractBlock - In the implementation block
+(id)exitLocation;
+(id)dayOfWeek;
+(id)mediaIsPlaying;
+(BOOL)supportsSecureCoding;
+(id)wifiConnectedToSSID;
+(id)isWeekend;
+(id)interactionDirection;
+(id)interactionSharingSourceBundleID;
+(id)connectedToExternalAudioOutput;
+(id)allRegisteredItemTypes;
+(id)bundleIdOfShareExtensionOpened;
+(id)toggledDoNotDisturb;
+(id)relevanceCoarseAppActivityHash;
+(id)toggledAirplaneMode;
+(id)interactionPhotoLocation;
+(id)appIntentAutomationHash;
+(id)bundleIdOfHostOpenedShareExtension;
+(id)interactionItemTypes;
+(id)taskSpecificItemWithIdentifier:(id)arg1 valueClass:(Class)arg2 ;
+(id)locationIdentifier;
+(id)firstBacklightAfterWakeup;
+(id)relevanceAppActivityHash;
+(id)interactionMechanism;
+(id)toggledLowPowerMode;
+(id)interactionTextTopic;
+(id)interactionExtractedTopicFromAttachment;
+(id)alarmStoppedAny;
+(id)bluetoothConnectedToDeviceWithAddress;
+(id)hourOfDaySlot;
+(id)interactionTargetBundleID;
+(id)alarmSnoozedWithID;
+(id)bluetoothConnectedToDevice;
+(id)appOpened;
+(void)unregisterItemType:(id)arg1 ;
+(id)appInFocus;
+(id)wifiIsConnectedToSSID;
+(id)connectedToCarPlay;
+(id)wifiDisconnectedFromSSID;
+(id)appLaunchedReason;
+(id)alarmStoppedWithID;
+(id)relevanceCoarseIntentHash;
+(id)alarmSnoozedAny;
+(id)hourOfDay;
+(id)interactionSender;
+(id)mediaGenreStartedPlaying;
+(id)relevanceIntentHash;
+(id)temporalItemTypes;
+(id)appActivityType;
+(void)registerItemType:(id)arg1 ;
+(id)allItemTypesDictionary;
+(id)bluetoothConnectedToDeviceWithName;
+(id)interactionRecipients;
+(id)allItemTypes;
+(id)appIntentClass;
+(id)interactionContentURL;
+(id)interactionPhotoContact;
+(id)interactionUTIType;
+(id)interactionPhotoScene;
+(id)enterLocation;
-(long long)edge;
-(_DKEventStream *)eventStream;
-(Class)valueClass;
-(void)setEdge:(long long)arg1 ;
-(id)extractEventFromDKEvent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)extractValueFromDKEvent:(id)arg1 ;
-(id)description;
-(id)valueExtractBlock;
-(id)extractItemFromDKEvent:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setValueClass:(Class)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setEventStream:(_DKEventStream *)arg1 ;
-(void)setValueExtractBlock:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

