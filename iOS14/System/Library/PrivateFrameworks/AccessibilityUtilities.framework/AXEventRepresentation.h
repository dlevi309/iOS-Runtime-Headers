/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AXEventRepresentationDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AXEventHandInfoRepresentation, AXEventKeyInfoRepresentation, AXEventAccelerometerInfoRepresentation, AXEventGameControllerInfoRepresentation, AXEventPointerInfoRepresentation, AXEventIOSMACPointerInfoRepresentation, NSString, NSData, AXEventData;

@interface AXEventRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying> {

	BOOL _isBuiltIn;
	BOOL _isDisplayIntegrated;
	BOOL _isGeneratedEvent;
	BOOL _useOriginalHIDTime;
	BOOL _redirectEvent;
	BOOL _systemDrag;
	unsigned _type;
	unsigned _originalType;
	int _subtype;
	int _flags;
	unsigned _taskPort;
	int _pid;
	unsigned _contextId;
	unsigned _displayId;
	unsigned _willUpdateMask;
	unsigned _didUpdateMask;
	unsigned long long _time;
	unsigned long long _senderID;
	AXEventHandInfoRepresentation* _handInfo;
	AXEventKeyInfoRepresentation* _keyInfo;
	AXEventAccelerometerInfoRepresentation* _accelerometerInfo;
	AXEventGameControllerInfoRepresentation* _gameControllerInfo;
	AXEventPointerInfoRepresentation* _pointerControllerInfo;
	AXEventIOSMACPointerInfoRepresentation* _iosmacPointerInfo;
	NSString* _clientId;
	unsigned long long _HIDTime;
	NSData* _HIDAttributeData;
	long long _scrollAmount;
	long long _scrollAccelAmount;
	unsigned long long _additionalFlags;
	long long _generationCount;
	IOHIDEventRef _creatorHIDEvent;
	IOHIDServiceClientRef _creatorHIDServiceClient;
	AXEventData* _accessibilityData;
	void* _window;
	NSData* _data;
	CGPoint _location;
	CGPoint _windowLocation;

}

@property (assign,nonatomic) void* window;                                                              //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSData * data;                                                             //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) IOHIDEventRef creatorHIDEvent;                                             //@synthesize creatorHIDEvent=_creatorHIDEvent - In the implementation block
@property (nonatomic,retain) IOHIDServiceClientRef creatorHIDServiceClient;                             //@synthesize creatorHIDServiceClient=_creatorHIDServiceClient - In the implementation block
@property (assign,nonatomic) unsigned type;                                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned originalType;                                                     //@synthesize originalType=_originalType - In the implementation block
@property (assign,nonatomic) int subtype;                                                               //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) CGPoint location;                                                          //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) CGPoint windowLocation;                                                    //@synthesize windowLocation=_windowLocation - In the implementation block
@property (assign,nonatomic) unsigned long long time;                                                   //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) int flags;                                                                 //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned long long senderID;                                               //@synthesize senderID=_senderID - In the implementation block
@property (nonatomic,retain) AXEventHandInfoRepresentation * handInfo;                                  //@synthesize handInfo=_handInfo - In the implementation block
@property (nonatomic,retain) AXEventKeyInfoRepresentation * keyInfo;                                    //@synthesize keyInfo=_keyInfo - In the implementation block
@property (nonatomic,retain) AXEventAccelerometerInfoRepresentation * accelerometerInfo;                //@synthesize accelerometerInfo=_accelerometerInfo - In the implementation block
@property (nonatomic,retain) AXEventGameControllerInfoRepresentation * gameControllerInfo;              //@synthesize gameControllerInfo=_gameControllerInfo - In the implementation block
@property (nonatomic,retain) AXEventPointerInfoRepresentation * pointerControllerInfo;                  //@synthesize pointerControllerInfo=_pointerControllerInfo - In the implementation block
@property (nonatomic,retain) AXEventIOSMACPointerInfoRepresentation * iosmacPointerInfo;                //@synthesize iosmacPointerInfo=_iosmacPointerInfo - In the implementation block
@property (nonatomic,retain) NSString * clientId;                                                       //@synthesize clientId=_clientId - In the implementation block
@property (assign,nonatomic) unsigned taskPort;                                                         //@synthesize taskPort=_taskPort - In the implementation block
@property (assign,nonatomic) int pid;                                                                   //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) unsigned long long HIDTime;                                                //@synthesize HIDTime=_HIDTime - In the implementation block
@property (nonatomic,retain) NSData * HIDAttributeData;                                                 //@synthesize HIDAttributeData=_HIDAttributeData - In the implementation block
@property (assign,nonatomic) long long scrollAmount;                                                    //@synthesize scrollAmount=_scrollAmount - In the implementation block
@property (assign,nonatomic) long long scrollAccelAmount;                                               //@synthesize scrollAccelAmount=_scrollAccelAmount - In the implementation block
@property (assign,nonatomic) unsigned long long additionalFlags;                                        //@synthesize additionalFlags=_additionalFlags - In the implementation block
@property (assign,nonatomic) unsigned contextId;                                                        //@synthesize contextId=_contextId - In the implementation block
@property (assign,nonatomic) unsigned displayId;                                                        //@synthesize displayId=_displayId - In the implementation block
@property (assign,nonatomic) BOOL isBuiltIn;                                                            //@synthesize isBuiltIn=_isBuiltIn - In the implementation block
@property (assign,nonatomic) BOOL isDisplayIntegrated;                                                  //@synthesize isDisplayIntegrated=_isDisplayIntegrated - In the implementation block
@property (assign,nonatomic) long long generationCount;                                                 //@synthesize generationCount=_generationCount - In the implementation block
@property (assign,nonatomic) unsigned willUpdateMask;                                                   //@synthesize willUpdateMask=_willUpdateMask - In the implementation block
@property (assign,nonatomic) unsigned didUpdateMask;                                                    //@synthesize didUpdateMask=_didUpdateMask - In the implementation block
@property (assign,nonatomic) BOOL isGeneratedEvent;                                                     //@synthesize isGeneratedEvent=_isGeneratedEvent - In the implementation block
@property (assign,nonatomic) BOOL useOriginalHIDTime;                                                   //@synthesize useOriginalHIDTime=_useOriginalHIDTime - In the implementation block
@property (nonatomic,readonly) BOOL isUpdate; 
@property (nonatomic,readonly) BOOL willBeUpdated; 
@property (nonatomic,readonly) unsigned long long fingerCount; 
@property (nonatomic,readonly) BOOL isTouchDown; 
@property (nonatomic,readonly) BOOL isMove; 
@property (nonatomic,readonly) BOOL isChordChange; 
@property (nonatomic,readonly) BOOL isLift; 
@property (nonatomic,readonly) BOOL isInRange; 
@property (nonatomic,readonly) BOOL isInRangeLift; 
@property (nonatomic,readonly) BOOL isCancel; 
@property (assign,getter=isRedirectEvent,nonatomic) BOOL redirectEvent;                                 //@synthesize redirectEvent=_redirectEvent - In the implementation block
@property (assign,getter=isSystemDrag,nonatomic) BOOL systemDrag;                                       //@synthesize systemDrag=_systemDrag - In the implementation block
@property (nonatomic,retain) AXEventData * accessibilityData;                                           //@synthesize accessibilityData=_accessibilityData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_pointerControllerEvent:(IOHIDEventRef)arg1 hidStreamIdentifier:(id)arg2 ;
+(id)_digitizerRepresentation:(IOHIDEventRef)arg1 hidStreamIdentifier:(id)arg2 ;
+(id)keyRepresentationWithType:(unsigned)arg1 ;
+(id)representationWithLocation:(CGPoint)arg1 windowLocation:(CGPoint)arg2 handInfo:(id)arg3 ;
+(id)cancelEventForPathIndexMask:(unsigned)arg1 ;
+(id)representationWithEventRecord:(SCD_Struct_AX10*)arg1 ;
+(id)_motionGestureTapEvent:(IOHIDEventRef)arg1 serviceClient:(IOHIDServiceClientRef)arg2 hidStreamIdentifier:(id)arg3 clientID:(id)arg4 taskPort:(unsigned)arg5 ;
+(id)representationWithHIDEvent:(IOHIDEventRef)arg1 hidStreamIdentifier:(id)arg2 ;
+(id)representationWithType:(unsigned)arg1 subtype:(int)arg2 time:(unsigned long long)arg3 location:(CGPoint)arg4 windowLocation:(CGPoint)arg5 handInfo:(id)arg6 ;
+(id)accelerometerRepresentation:(id)arg1 ;
+(id)_wheelEvent:(IOHIDEventRef)arg1 ;
+(id)representationWithHIDEvent:(IOHIDEventRef)arg1 serviceClient:(IOHIDServiceClientRef)arg2 hidStreamIdentifier:(id)arg3 ;
+(id)_keyboardButtonEvent:(IOHIDEventRef)arg1 ;
+(id)iosmacPointerRepresentationWithTypeWithPointerInfo:(id)arg1 ;
+(id)touchRepresentationWithHandType:(unsigned)arg1 location:(CGPoint)arg2 ;
+(id)representationWithHIDEvent:(IOHIDEventRef)arg1 hidStreamIdentifier:(id)arg2 clientID:(id)arg3 taskPort:(unsigned)arg4 ;
+(id)_gameControllerEvent:(IOHIDEventRef)arg1 ;
+(void)_appendKeyInfoToMediaKey:(id)arg1 usage:(long long)arg2 downEvent:(BOOL)arg3 ;
+(id)buttonRepresentationWithType:(unsigned)arg1 ;
+(id)representationWithData:(id)arg1 ;
+(id)gestureRepresentationWithHandType:(unsigned)arg1 locations:(id)arg2 ;
+(id)representationWithHIDEvent:(IOHIDEventRef)arg1 serviceClient:(IOHIDServiceClientRef)arg2 hidStreamIdentifier:(id)arg3 clientID:(id)arg4 taskPort:(unsigned)arg5 ;
-(BOOL)isBuiltIn;
-(int)subtype;
-(BOOL)isUpdate;
-(unsigned long long)time;
-(BOOL)isMove;
-(void)setClientId:(NSString *)arg1 ;
-(void)setTime:(unsigned long long)arg1 ;
-(unsigned long long)senderID;
-(id)dataRepresentation;
-(int)pid;
-(unsigned)displayId;
-(BOOL)isLift;
-(unsigned)contextId;
-(void)setWindow:(void*)arg1 ;
-(unsigned long long)HIDTime;
-(long long)generationCount;
-(CGPoint)location;
-(void)setWindowLocation:(CGPoint)arg1 ;
-(void)setHandInfo:(AXEventHandInfoRepresentation *)arg1 ;
-(void)setIsGeneratedEvent:(BOOL)arg1 ;
-(void)setIsDisplayIntegrated:(BOOL)arg1 ;
-(void)setOriginalType:(unsigned)arg1 ;
-(void)setKeyInfo:(AXEventKeyInfoRepresentation *)arg1 ;
-(void)setScrollAmount:(long long)arg1 ;
-(void)setScrollAccelAmount:(long long)arg1 ;
-(void)setGameControllerInfo:(AXEventGameControllerInfoRepresentation *)arg1 ;
-(void)setPointerControllerInfo:(AXEventPointerInfoRepresentation *)arg1 ;
-(void)setTaskPort:(unsigned)arg1 ;
-(void)setHIDAttributeData:(NSData *)arg1 ;
-(void)setIsBuiltIn:(BOOL)arg1 ;
-(void)setHIDTime:(unsigned long long)arg1 ;
-(void)setCreatorHIDEvent:(IOHIDEventRef)arg1 ;
-(void)setAccessibilityData:(AXEventData *)arg1 ;
-(void)setCreatorHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(id)_accessibilityDataFromRealEvent:(IOHIDEventRef)arg1 ;
-(void)setSystemDrag:(BOOL)arg1 ;
-(void)setAccelerometerInfo:(AXEventAccelerometerInfoRepresentation *)arg1 ;
-(void)setIosmacPointerInfo:(AXEventIOSMACPointerInfoRepresentation *)arg1 ;
-(unsigned)originalType;
-(IOHIDEventRef)_newHandHIDEventRef;
-(IOHIDEventRef)_newIOSMACPointerRef;
-(IOHIDEventRef)_newKeyboardHIDEventRef;
-(IOHIDEventRef)_newButtonHIDEventRefWithType:(unsigned)arg1 ;
-(IOHIDEventRef)_newAccelerometerHIDEventRef;
-(void)_applyAccessibilityDataToRealEvent:(IOHIDEventRef)arg1 ;
-(BOOL)useOriginalHIDTime;
-(unsigned long long)_machTimeForHIDEventRef;
-(AXEventAccelerometerInfoRepresentation *)accelerometerInfo;
-(NSData *)HIDAttributeData;
-(unsigned long long)additionalFlags;
-(long long)scrollAmount;
-(int)flags;
-(AXEventIOSMACPointerInfoRepresentation *)iosmacPointerInfo;
-(BOOL)isGeneratedEvent;
-(unsigned char)screenEdgeForPoint:(CGPoint)arg1 ;
-(BOOL)isDisplayIntegrated;
-(CGPoint)windowLocation;
-(void)setAdditionalFlags:(unsigned long long)arg1 ;
-(long long)scrollAccelAmount;
-(BOOL)isRedirectEvent;
-(void)setRedirectEvent:(BOOL)arg1 ;
-(BOOL)isSystemDrag;
-(AXEventGameControllerInfoRepresentation *)gameControllerInfo;
-(AXEventPointerInfoRepresentation *)pointerControllerInfo;
-(id)_senderNameForID;
-(BOOL)_HIDEventIsAccessibilityEvent:(IOHIDEventRef)arg1 ;
-(AXEventData *)accessibilityData;
-(IOHIDEventRef)_accessibilityEventFromRealEvent:(IOHIDEventRef)arg1 ;
-(unsigned)pathIndexMask;
-(void)resetInitialTouchCountValueForHidStreamIdentifier:(id)arg1 ;
-(BOOL)willBeUpdated;
-(id)normalizedEventRepresentation:(BOOL)arg1 scale:(BOOL)arg2 ;
-(id)fakeTouchScaleEventRepresentation:(BOOL)arg1 ;
-(void)modifyPoints:(/*^block*/id)arg1 ;
-(void)neuterUpdates;
-(id)denormalizedEventRepresentation:(BOOL)arg1 descale:(BOOL)arg2 ;
-(GSEventRef)newGSEventRef;
-(unsigned)firstPathContextId;
-(unsigned long long)fingerCount;
-(BOOL)isTouchDown;
-(BOOL)isChordChange;
-(BOOL)isInRangeLift;
-(void)applyAccessibilityDataToCreatorHIDEvent;
-(void)setUseOriginalHIDTime:(BOOL)arg1 ;
-(IOHIDServiceClientRef)creatorHIDServiceClient;
-(void)setContextId:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(BOOL)isCancel;
-(AXEventKeyInfoRepresentation *)keyInfo;
-(NSString *)description;
-(id)accessibilityEventRepresentationTabularDescription;
-(AXEventHandInfoRepresentation *)handInfo;
-(NSData *)data;
-(void*)window;
-(BOOL)isInRange;
-(NSString *)clientId;
-(IOHIDEventRef)newHIDEventRef;
-(IOHIDEventRef)creatorHIDEvent;
-(SCD_Struct_AX10*)newEventRecord;
-(unsigned)type;
-(void)setDisplayId:(unsigned)arg1 ;
-(void)setFlags:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)taskPort;
-(BOOL)isDownEvent;
-(void)setSubtype:(int)arg1 ;
-(unsigned)willUpdateMask;
-(void)setWillUpdateMask:(unsigned)arg1 ;
-(unsigned)didUpdateMask;
-(void)setDidUpdateMask:(unsigned)arg1 ;
-(void)setPid:(int)arg1 ;
-(void)setGenerationCount:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

