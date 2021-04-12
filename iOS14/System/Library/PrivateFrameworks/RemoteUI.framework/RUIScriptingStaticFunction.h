/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/


@interface RUIScriptingStaticFunction : NSObject {

	int _JSPropertyAttributes;
	const char* _identifier;
	/*function pointer*/void* _function;

}

@property (assign,nonatomic) const char* identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* function;              //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) int JSPropertyAttributes;                        //@synthesize JSPropertyAttributes=_JSPropertyAttributes - In the implementation block
-(/*function pointer*/void*)function;
-(id)description;
-(void)setFunction:(/*function pointer*/void*)arg1 ;
-(void)setIdentifier:(const char*)arg1 ;
-(const char*)identifier;
-(int)JSPropertyAttributes;
-(void)setJSPropertyAttributes:(int)arg1 ;
@end

