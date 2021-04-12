/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(const char*)identifier;
-(/*function pointer*/void*)function;
-(void)setIdentifier:(const char*)arg1 ;
-(void)setFunction:(/*function pointer*/void*)arg1 ;
-(int)JSPropertyAttributes;
-(void)setJSPropertyAttributes:(int)arg1 ;
@end

