/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCallbackBlock:(/*^block*/id)arg1 privateContainer:(id)arg2 ;
-(id<NFDefinitionContainer>)privateContainer;
@end

