/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDObject.h>

@interface ASDControl : ASDObject {

	unsigned _objectClassID;
	unsigned _controlElement;
	unsigned _controlScope;

}

@property (assign,nonatomic) unsigned controlElement;              //@synthesize controlElement=_controlElement - In the implementation block
@property (assign,nonatomic) unsigned controlScope;                //@synthesize controlScope=_controlScope - In the implementation block
-(id)initWithPlugin:(id)arg1 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(unsigned)objectClass;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(unsigned)baseClass;
-(unsigned)controlScope;
-(unsigned)controlElement;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned)arg4 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(BOOL)isKindOfAudioClass:(unsigned)arg1 ;
-(id)driverClassName;
-(void)setControlElement:(unsigned)arg1 ;
-(void)setControlScope:(unsigned)arg1 ;
@end

