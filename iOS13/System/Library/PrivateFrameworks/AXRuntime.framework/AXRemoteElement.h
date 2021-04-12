/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)initialize;
+(BOOL)_isSerializableAccessibilityElement;
+(id)remoteElementForBlock:(/*^block*/id)arg1 ;
+(id)remoteElementsForBlock:(/*^block*/id)arg1 ;
+(id)remoteElementsForContextId:(unsigned)arg1 ;
+(BOOL)registerRemoteElement:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)machPort;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityContainer;
-(void)setAccessibilityContainer:(id)arg1 ;
-(id)accessibilityElements;
-(unsigned)contextId;
-(void)unregister;
-(void)setContextId:(unsigned)arg1 ;
-(unsigned long long)uuidHash;
-(int)remotePid;
-(BOOL)deniesDirectAppConnection;
-(void)setRemotePid:(int)arg1 ;
-(id)_accessibilityTextOperations;
-(BOOL)onClientSide;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityResponderElement;
-(id)_accessibilityHandwritingElement;
-(void)platformCleanup;
-(void)_getRemoteValuesOffMainThread:(/*^block*/id)arg1 ;
-(id)_remoteElementWithAttribute:(long long)arg1 limitToRemoteSubviews:(BOOL)arg2 ;
-(id<AXRemoteElementChildrenDelegate>)remoteChildrenDelegate;
-(id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned)arg3 ;
-(void)setMachPort:(unsigned)arg1 ;
-(void)_accessibilityIncreaseSelection:(id)arg1 ;
-(void)_accessibilitySetFocusOnElement:(BOOL)arg1 ;
-(BOOL)_accessibilitySetNativeFocus;
-(unsigned)localHostingWindowContextId;
-(void)getLeafElementsFromRemoteSide:(/*^block*/id)arg1 ;
-(id)_accessibilityActiveKeyboard;
-(id)_accessibilityFirstElement;
-(id)_accessibilityLastElement;
-(BOOL)_accessibilityIsGroupedParent;
-(id)_accessibilitySortedElementsWithin;
-(unsigned long long)_accessibilityAutomationType;
-(void)setOnClientSide:(BOOL)arg1 ;
-(void)setRemoteChildrenDelegate:(id<AXRemoteElementChildrenDelegate>)arg1 ;
-(void)setDeniesDirectAppConnection:(BOOL)arg1 ;
@end

