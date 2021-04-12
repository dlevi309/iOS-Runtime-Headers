/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/


@interface RUIScriptingStaticValue : NSObject {

	int _JSPropertyAttributes;
	const char* _identifier;
	/*function pointer*/void* _getter;
	/*function pointer*/void* _setter;

}

@property (assign,nonatomic) const char* identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* getter;              //@synthesize getter=_getter - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* setter;              //@synthesize setter=_setter - In the implementation block
@property (assign,nonatomic) int JSPropertyAttributes;                      //@synthesize JSPropertyAttributes=_JSPropertyAttributes - In the implementation block
-(id)description;
-(const char*)identifier;
-(void)setIdentifier:(const char*)arg1 ;
-(void)setGetter:(/*function pointer*/void*)arg1 ;
-(void)setSetter:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)getter;
-(/*function pointer*/void*)setter;
-(int)JSPropertyAttributes;
-(void)setJSPropertyAttributes:(int)arg1 ;
@end

