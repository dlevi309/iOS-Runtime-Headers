/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXComponentInteractionHandler;
@class SXComponentView;

@interface SXComponentInteraction : NSObject {

	SXComponentView* _componentView;
	id<SXComponentInteractionHandler> _handler;
	unsigned long long _types;

}

@property (nonatomic,__weak,readonly) SXComponentView * componentView;                 //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,readonly) id<SXComponentInteractionHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) unsigned long long types;                               //@synthesize types=_types - In the implementation block
-(unsigned long long)types;
-(id<SXComponentInteractionHandler>)handler;
-(SXComponentView *)componentView;
-(id)initWithComponentView:(id)arg1 handler:(id)arg2 types:(unsigned long long)arg3 ;
-(BOOL)handlesType:(unsigned long long)arg1 ;
@end

