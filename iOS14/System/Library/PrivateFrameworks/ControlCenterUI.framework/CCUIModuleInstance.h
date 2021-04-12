/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CCUIContentModule;
@class CCSModuleMetadata;

@interface CCUIModuleInstance : NSObject <NSCopying> {

	CCSModuleMetadata* _metadata;
	id<CCUIContentModule> _module;
	CCUILayoutSize _prototypeModuleSize;

}

@property (nonatomic,readonly) CCSModuleMetadata * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) id<CCUIContentModule> module;                    //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) CCUILayoutSize prototypeModuleSize;              //@synthesize prototypeModuleSize=_prototypeModuleSize - In the implementation block
-(id)initWithMetadata:(id)arg1 module:(id)arg2 prototypeModuleSize:(CCUILayoutSize)arg3 ;
-(id<CCUIContentModule>)module;
-(CCSModuleMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CCUILayoutSize)prototypeModuleSize;
@end

