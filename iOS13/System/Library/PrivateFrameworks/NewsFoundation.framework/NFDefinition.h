/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@protocol NFDefinitionContainer;
@class Protocol;

@interface NFDefinition : NSObject {

	id<NFDefinitionContainer> _privateAccessContainer;
	id<NFDefinitionContainer> _privateAccessWeakContainer;
	BOOL _canBeOverridden;
	BOOL _canBeNil;
	unsigned long long _source;
	Class _cls;
	Protocol* _protocol;
	/*^block*/id _factory;
	unsigned long long _scope;
	/*^block*/id _validationBlock;
	/*^block*/id _configurationBlock;

}

@property (assign,nonatomic) unsigned long long source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) Class cls;                              //@synthesize cls=_cls - In the implementation block
@property (nonatomic,retain) Protocol * protocol;                    //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,copy) id factory;                               //@synthesize factory=_factory - In the implementation block
@property (assign,nonatomic) unsigned long long scope;               //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) BOOL canBeOverridden;                   //@synthesize canBeOverridden=_canBeOverridden - In the implementation block
@property (assign,nonatomic) BOOL canBeNil;                          //@synthesize canBeNil=_canBeNil - In the implementation block
@property (nonatomic,copy) id validationBlock;                       //@synthesize validationBlock=_validationBlock - In the implementation block
@property (nonatomic,copy) id configurationBlock;                    //@synthesize configurationBlock=_configurationBlock - In the implementation block
-(id)description;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
-(Protocol *)protocol;
-(void)setProtocol:(Protocol *)arg1 ;
-(unsigned long long)scope;
-(id)factory;
-(void)setScope:(unsigned long long)arg1 ;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(void)setFactory:(id)arg1 ;
-(id)initWithClass:(Class)arg1 factory:(/*^block*/id)arg2 ;
-(id)initWithProtocol:(id)arg1 factory:(/*^block*/id)arg2 ;
-(id)initWithUnsafeFactory:(/*^block*/id)arg1 ;
-(id)inScope:(unsigned long long)arg1 ;
-(id)withValidation:(/*^block*/id)arg1 ;
-(id)withConfiguration:(/*^block*/id)arg1 ;
-(id)canBeOverridden:(BOOL)arg1 ;
-(id)canBeNil:(BOOL)arg1 ;
-(id)privateAccessContainer;
-(id)withPrivateAccessInContainer:(id)arg1 ;
-(id)withPrivateAccessInWeakContainer:(id)arg1 ;
-(Class)cls;
-(void)setCls:(Class)arg1 ;
-(BOOL)canBeOverridden;
-(void)setCanBeOverridden:(BOOL)arg1 ;
-(BOOL)canBeNil;
-(void)setCanBeNil:(BOOL)arg1 ;
-(id)validationBlock;
-(void)setValidationBlock:(id)arg1 ;
@end

