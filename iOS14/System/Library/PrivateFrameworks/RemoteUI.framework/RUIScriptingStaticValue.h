/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(/*function pointer*/void*)getter;
-(/*function pointer*/void*)setter;
-(id)description;
-(void)setIdentifier:(const char*)arg1 ;
-(const char*)identifier;
-(void)setGetter:(/*function pointer*/void*)arg1 ;
-(void)setSetter:(/*function pointer*/void*)arg1 ;
-(int)JSPropertyAttributes;
-(void)setJSPropertyAttributes:(int)arg1 ;
@end

