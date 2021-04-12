/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMutableDictionary, NSSet;

@interface PXDiagnosticsItemProvider : NSObject {

	NSMutableDictionary* __loadHandlers;

}

@property (nonatomic,readonly) NSMutableDictionary * _loadHandlers;              //@synthesize _loadHandlers=__loadHandlers - In the implementation block
@property (nonatomic,readonly) NSSet * registeredIdentifiers; 
+(id)providerWithItem:(id)arg1 identifier:(id)arg2 ;
-(id)init;
-(void)registerItemForIdentifier:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(BOOL)hasItemForIdentifier:(id)arg1 ;
-(NSSet *)registeredIdentifiers;
-(void)registerItem:(id)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)_loadHandlers;
-(id)itemForIdentifier:(id)arg1 ;
@end

