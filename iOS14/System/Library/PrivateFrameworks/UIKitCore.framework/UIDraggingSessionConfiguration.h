/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, UIDraggingSystemTouchRoutingPolicy, PBItemCollection, NSXPCListenerEndpoint, NSString;

@interface UIDraggingSessionConfiguration : NSObject <NSSecureCoding> {

	BOOL _supportsSystemDrag;
	BOOL _initiatedWithPointer;
	unsigned _coordinateSpaceSourceContextID;
	NSArray* _touchIDs;
	unsigned long long _coordinateSpaceSourceLayerRenderID;
	UIDraggingSystemTouchRoutingPolicy* _routingPolicy;
	PBItemCollection* _itemCollection;
	NSXPCListenerEndpoint* _dataProviderEndpoint;
	NSXPCListenerEndpoint* _axEndpoint;
	NSString* _sceneIdentifier;
	CGPoint _initialCentroid;

}

@property (nonatomic,retain) NSArray * touchIDs;                                                 //@synthesize touchIDs=_touchIDs - In the implementation block
@property (assign,nonatomic) CGPoint initialCentroid;                                            //@synthesize initialCentroid=_initialCentroid - In the implementation block
@property (nonatomic,retain) UIDraggingSystemTouchRoutingPolicy * routingPolicy;                 //@synthesize routingPolicy=_routingPolicy - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * axEndpoint;                                 //@synthesize axEndpoint=_axEndpoint - In the implementation block
@property (assign,nonatomic) unsigned coordinateSpaceSourceContextID;                            //@synthesize coordinateSpaceSourceContextID=_coordinateSpaceSourceContextID - In the implementation block
@property (assign,nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;              //@synthesize coordinateSpaceSourceLayerRenderID=_coordinateSpaceSourceLayerRenderID - In the implementation block
@property (nonatomic,retain) PBItemCollection * itemCollection;                                  //@synthesize itemCollection=_itemCollection - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * dataProviderEndpoint;                       //@synthesize dataProviderEndpoint=_dataProviderEndpoint - In the implementation block
@property (assign,nonatomic) BOOL supportsSystemDrag;                                            //@synthesize supportsSystemDrag=_supportsSystemDrag - In the implementation block
@property (nonatomic,retain) NSString * sceneIdentifier;                                         //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL initiatedWithPointer;                                          //@synthesize initiatedWithPointer=_initiatedWithPointer - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(NSString *)sceneIdentifier;
-(void)setInitialCentroid:(CGPoint)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)touchIDs;
-(void)setTouchIDs:(NSArray *)arg1 ;
-(NSXPCListenerEndpoint *)dataProviderEndpoint;
-(BOOL)supportsSystemDrag;
-(void)setRoutingPolicy:(UIDraggingSystemTouchRoutingPolicy *)arg1 ;
-(void)setAxEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)setInitiatedWithPointer:(BOOL)arg1 ;
-(CGPoint)initialCentroid;
-(NSXPCListenerEndpoint *)axEndpoint;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)coordinateSpaceSourceContextID;
-(void)setCoordinateSpaceSourceContextID:(unsigned)arg1 ;
-(unsigned long long)coordinateSpaceSourceLayerRenderID;
-(void)setCoordinateSpaceSourceLayerRenderID:(unsigned long long)arg1 ;
-(void)setSupportsSystemDrag:(BOOL)arg1 ;
-(BOOL)initiatedWithPointer;
-(UIDraggingSystemTouchRoutingPolicy *)routingPolicy;
-(PBItemCollection *)itemCollection;
-(void)setItemCollection:(PBItemCollection *)arg1 ;
-(void)setDataProviderEndpoint:(NSXPCListenerEndpoint *)arg1 ;
@end

