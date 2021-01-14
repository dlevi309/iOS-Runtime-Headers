/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
*/


@interface AXSimpleRuntimeManager : NSObject {

	BOOL _systemWideServer;
	BOOL _started;
	/*^block*/id _parameterizedAttributeCallback;
	/*^block*/id _attributeCallback;
	/*^block*/id _setAttributeCallback;
	/*^block*/id _performActionCallback;
	/*^block*/id _clientObserverCallback;
	/*^block*/id _hitTestCallback;
	/*^block*/id _applicationElementCallback;
	/*^block*/id _outgoingValuePreprocessor;

}

@property (assign,nonatomic) BOOL started;                                 //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL systemWideServer;                        //@synthesize systemWideServer=_systemWideServer - In the implementation block
@property (nonatomic,copy) id parameterizedAttributeCallback;              //@synthesize parameterizedAttributeCallback=_parameterizedAttributeCallback - In the implementation block
@property (nonatomic,copy) id attributeCallback;                           //@synthesize attributeCallback=_attributeCallback - In the implementation block
@property (nonatomic,copy) id setAttributeCallback;                        //@synthesize setAttributeCallback=_setAttributeCallback - In the implementation block
@property (nonatomic,copy) id performActionCallback;                       //@synthesize performActionCallback=_performActionCallback - In the implementation block
@property (nonatomic,copy) id clientObserverCallback;                      //@synthesize clientObserverCallback=_clientObserverCallback - In the implementation block
@property (nonatomic,copy) id hitTestCallback;                             //@synthesize hitTestCallback=_hitTestCallback - In the implementation block
@property (nonatomic,copy) id applicationElementCallback;                  //@synthesize applicationElementCallback=_applicationElementCallback - In the implementation block
@property (nonatomic,copy) id outgoingValuePreprocessor;                   //@synthesize outgoingValuePreprocessor=_outgoingValuePreprocessor - In the implementation block
+(id)sharedManager;
-(void)start;
-(BOOL)started;
-(void)setStarted:(BOOL)arg1 ;
-(BOOL)systemWideServer;
-(void)setSystemWideServer:(BOOL)arg1 ;
-(id)parameterizedAttributeCallback;
-(void)setParameterizedAttributeCallback:(id)arg1 ;
-(id)attributeCallback;
-(void)setAttributeCallback:(id)arg1 ;
-(id)setAttributeCallback;
-(void)setSetAttributeCallback:(id)arg1 ;
-(id)performActionCallback;
-(void)setPerformActionCallback:(id)arg1 ;
-(id)clientObserverCallback;
-(void)setClientObserverCallback:(id)arg1 ;
-(id)hitTestCallback;
-(void)setHitTestCallback:(id)arg1 ;
-(id)applicationElementCallback;
-(void)setApplicationElementCallback:(id)arg1 ;
-(id)outgoingValuePreprocessor;
-(void)setOutgoingValuePreprocessor:(id)arg1 ;
@end

