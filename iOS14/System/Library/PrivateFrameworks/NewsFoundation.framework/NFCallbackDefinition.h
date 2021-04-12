/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@protocol NFDefinitionContainer;
@interface NFCallbackDefinition : NSObject {

	/*^block*/id _callbackBlock;
	id<NFDefinitionContainer> _privateContainer;

}

@property (nonatomic,readonly) id callbackBlock;                                        //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (nonatomic,readonly) id<NFDefinitionContainer> privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
-(id)callbackBlock;
-(id<NFDefinitionContainer>)privateContainer;
-(id)initWithCallbackBlock:(/*^block*/id)arg1 privateContainer:(id)arg2 ;
@end

