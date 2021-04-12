/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <BehaviorMiner/BehaviorMiner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _DKEventStream;

@interface BMItemType : NSObject <NSCopying> {

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
+(id)dayOfWeek;
+(id)hourOfDay;
+(id)interactionSender;
+(id)interactionDirection;
+(id)interactionRecipients;
+(id)interactionTargetBundleID;
+(id)isWeekend;
+(id)hourOfDaySlot;
+(id)interactionUTIType;
+(id)interactionContentURL;
+(id)interactionSharingSourceBundleID;
+(id)locationIdentifier;
+(id)interactionPhotoContact;
+(id)interactionPhotoScene;
+(id)bundleIdOfHostOpenedShareExtension;
+(id)bundleIdOfShareExtensionOpened;
+(id)allItemTypes;
+(id)relevanceCoarseAppActivityHash;
+(id)relevanceAppActivityHash;
+(id)relevanceCoarseIntentHash;
+(id)relevanceIntentHash;
+(id)appIntentClass;
+(id)appActivityType;
+(id)firstBacklightAfterWakeup;
+(id)bluetoothConnectedToDevice;
+(id)bluetoothConnectedToDeviceWithName;
+(id)bluetoothConnectedToDeviceWithAddress;
+(id)mediaIsPlaying;
+(id)mediaGenreStartedPlaying;
+(id)allItemTypesDictionary;
+(id)appOpened;
+(id)appLaunchedReason;
+(id)appInFocus;
+(id)interactionMechanism;
+(id)interactionPhotoLocation;
+(id)interactionTextTopic;
+(id)interactionItemTypes;
+(id)connectedToExternalAudioOutput;
+(id)allRegisteredItemTypes;
+(void)registerItemType:(id)arg1 ;
+(void)unregisterItemType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(_DKEventStream *)eventStream;
-(Class)valueClass;
-(void)setValueClass:(Class)arg1 ;
-(void)setEdge:(long long)arg1 ;
-(long long)edge;
-(void)setEventStream:(_DKEventStream *)arg1 ;
-(void)setValueExtractBlock:(id)arg1 ;
-(id)extractEventFromDKEvent:(id)arg1 ;
-(id)valueExtractBlock;
-(id)extractValueFromDKEvent:(id)arg1 ;
-(id)extractItemFromDKEvent:(id)arg1 ;
@end

