/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSMethodSignature : NSObject {

	NSMethodFrameDescriptor* _frameDescriptor;
	char* _typeString;
	unsigned long long _flags;

}

@property (readonly) unsigned long long numberOfArguments; 
@property (readonly) unsigned long long frameLength; 
@property (readonly) const char* methodReturnType; 
@property (readonly) unsigned long long methodReturnLength; 
+(id)cd_signatureWithObjCTypes:(const char*)arg1 ;
+(void)initialize;
+(id)signatureWithObjCTypes:(const char*)arg1 ;
-(const char*)cd_getArgumentTypeAtIndex:(int)arg1 ;
-(unsigned long long)_flags;
-(BOOL)isOneway;
-(NSMethodFrameArgInfo*)_argInfo:(long long)arg1 ;
-(id)_typeString;
-(unsigned long long)frameLength;
-(const char*)_cTypeString;
-(BOOL)_isAllObjects;
-(unsigned long long)numberOfArguments;
-(NSMethodFrameDescriptor*)_frameDescriptor;
-(const char*)methodReturnType;
-(id)_initWithROMEntry:(const CFMethodSignatureROMEntry*)arg1 ;
-(id)_protocolsForObjectAtArgumentIndex:(long long)arg1 ;
-(id)_signatureForBlockAtArgumentIndex:(long long)arg1 ;
-(unsigned long long)methodReturnLength;
-(BOOL)_isHiddenStructRet;
-(const char*)getArgumentTypeAtIndex:(unsigned long long)arg1 ;
-(Class)_classForObjectAtArgumentIndex:(long long)arg1 ;
-(id)init;
-(id)debugDescription;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

