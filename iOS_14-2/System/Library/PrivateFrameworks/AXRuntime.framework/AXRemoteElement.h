/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
*/


@protocol AXRemoteElementChildrenDelegate;
#import <AXRuntime/AXRuntime-Structs.h>
@class NSString, NSMutableSet;

@interface AXRemoteElement : NSObject {

	NSString* _uuid;
	int _remotePid;
	unsigned _contextId;
	BOOL _onClientSide;
	NSMutableSet* _allChildren;
	BOOL _deniesDirectAppConnection;
	unsigned _machPort;
	id<AXRemoteElementChildrenDelegate> _remoteChildrenDelegate;
	id _accessibilityContainer;

}

@property (assign,nonatomic) int remotePid;                                                                  //@synthesize remotePid=_remotePid - In the implementation block
@property (assign,nonatomic) unsigned contextId;                                                             //@synthesize contextId=_contextId - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long uuidHash; 
@property (nonatomic,readonly) unsigned localHostingWindowContextId; 
@property (assign,nonatomic) unsigned machPort;                                                              //@synthesize machPort=_machPort - In the implementation block
@property (assign,nonatomic) BOOL onClientSide;                                                              //@synthesize onClientSide=_onClientSide - In the implementation block
@property (assign,nonatomic,__weak) id<AXRemoteElementChildrenDelegate> remoteChildrenDelegate;              //@synthesize remoteChildrenDelegate=_remoteChildrenDelegate - In the implementation block
@property (assign,nonatomic,__weak) id accessibilityContainer;                                               //@synthesize accessibilityContainer=_accessibilityContainer - In the implementation block
@property (assign,nonatomic) BOOL deniesDirectAppConnection;                                                 //@synthesize deniesDirectAppConnection=_deniesDirectAppConnection - In the implementation block
@property (nonatomic,readonly) CGRect containerAccessibilityFrame; 
+(void)initialize;
+(BOOL)_isSerializableAccessibilityElement;
+(BOOL)registerRemoteElement:(id)arg1 ;
+(id)remoteElementForBlock:(/*^block*/id)arg1 ;
+(id)registeredRemoteElements;
+(id)remoteElementsForBlock:(/*^block*/id)arg1 ;
+(id)remoteElementsForContextId:(unsigned)arg1 ;
-(id)_accessibilityNextElementsForSpeakThis;
-(id)_handleElementTraversalRequestMovingForward:(BOOL)arg1 count:(unsigned long long)arg2 shouldIncludeSelf:(BOOL)arg3 ;
-(void)platformCleanup;
-(id)_ancestorElementThatSupportsActivationAction;
-(id)_iosAccessibilityAttributeValue:(long long)arg1 ;
-(id)_iosAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2 ;
-(BOOL)_accessibilityIsRemoteElement;
-(BOOL)_accessibilityEnumerateSiblingsWithParent:(id*)arg1 options:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)accessibilityViewIsModal;
-(BOOL)accessibilityActivate;
-(void)unregister;
-(unsigned)machPort;
-(NSString *)uuid;
-(int)remotePid;
-(unsigned)contextId;
-(unsigned long long)uuidHash;
-(void)platformCleanup;
-(void)getLeafElementsFromRemoteSide:(/*^block*/id)arg1 ;
-(BOOL)_accessibilityIsGroupedParent;
-(void)setContextId:(unsigned)arg1 ;
-(BOOL)onClientSide;
-(id)accessibilityElements;
-(id)_accessibilityActiveKeyboard;
-(id)description;
-(id)_accessibilityHandwritingElement;
-(id)_accessibilityTextOperations;
-(id)_accessibilityTextViewTextOperationResponder;
-(CGRect)accessibilityFrame;
-(void)setAccessibilityContainer:(id)arg1 ;
-(id)_accessibilitySortedElementsWithin;
-(id)accessibilityContainer;
-(void)setUuid:(NSString *)arg1 ;
-(id)_accessibilityFirstElement;
-(id)_accessibilityResponderElement;
-(void)setMachPort:(unsigned)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(void)_accessibilityIncreaseSelection:(id)arg1 ;
-(void)dealloc;
-(BOOL)_accessibilitySetNativeFocus;
-(void)_accessibilitySetFocusOnElement:(BOOL)arg1 ;
-(CGRect)containerAccessibilityFrame;
-(BOOL)deniesDirectAppConnection;
-(void)setRemotePid:(int)arg1 ;
-(void)_getRemoteValuesOffMainThread:(/*^block*/id)arg1 ;
-(id)_remoteElementWithAttribute:(long long)arg1 limitToRemoteSubviews:(BOOL)arg2 ;
-(id<AXRemoteElementChildrenDelegate>)remoteChildrenDelegate;
-(id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned)arg3 ;
-(unsigned)localHostingWindowContextId;
-(id)_accessibilityLastElement;
-(void)setOnClientSide:(BOOL)arg1 ;
-(void)setRemoteChildrenDelegate:(id<AXRemoteElementChildrenDelegate>)arg1 ;
-(void)setDeniesDirectAppConnection:(BOOL)arg1 ;
@end

