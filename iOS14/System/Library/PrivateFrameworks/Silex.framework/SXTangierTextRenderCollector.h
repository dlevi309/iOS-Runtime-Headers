/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXTextRenderCollector.h>
#import <libobjc.A.dylib/SXTangierTextRepBehavior.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface SXTangierTextRenderCollector : NSObject <SXTextRenderCollector, SXTangierTextRepBehavior> {

	NSMutableDictionary* _flows;
	NSDictionary* _previousFlows;
	NSMutableDictionary* _layoutsByComponentIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * flows;                                     //@synthesize flows=_flows - In the implementation block
@property (nonatomic,retain) NSDictionary * previousFlows;                                    //@synthesize previousFlows=_previousFlows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * layoutsByComponentIdentifier;              //@synthesize layoutsByComponentIdentifier=_layoutsByComponentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setFlows:(NSMutableDictionary *)arg1 ;
-(void)setLayoutsByComponentIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setPreviousFlows:(NSDictionary *)arg1 ;
-(id)flowLayoutForComponentIdentifier:(id)arg1 ;
-(id)itemWithIdentifier:(id)arg1 storage:(id)arg2 directLayerHost:(id)arg3 inItems:(id)arg4 ;
-(id)infoForStorage:(id)arg1 selection:(id)arg2 ;
-(void)buildFlowsAndUpdateInfosWithICC:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)layoutsByComponentIdentifier;
-(NSMutableDictionary *)flows;
-(void)storeItem:(id)arg1 forFlowName:(id)arg2 ;
-(void)addTextStorage:(id)arg1 withLayout:(id)arg2 forNamedFlow:(id)arg3 directLayerHostView:(id)arg4 selectable:(BOOL)arg5 componentIdentifier:(id)arg6 ;
-(BOOL)tangierTextRepAllowsSelection:(id)arg1 ;
-(NSDictionary *)previousFlows;
-(void)buildFlowsAndUpdateInfosWithICC:(id)arg1 ;
@end

