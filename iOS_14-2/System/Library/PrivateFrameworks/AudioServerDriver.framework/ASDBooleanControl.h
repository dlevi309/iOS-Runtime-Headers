/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDControl.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ASDBooleanControl : ASDControl {

	BOOL _value;
	NSObject*<OS_dispatch_queue> _valueQueue;
	BOOL _settable;

}

@property (assign,nonatomic) BOOL value; 
@property (getter=isSettable,nonatomic,readonly) BOOL settable;              //@synthesize settable=_settable - In the implementation block
+(id)muteControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
+(id)phantomPowerControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
+(id)invertControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
+(id)jackControlWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
-(void)setValue:(BOOL)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)value;
-(BOOL)changeValue:(BOOL)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(unsigned)baseClass;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 ;
-(id)initWithElement:(unsigned)arg1 inScope:(unsigned)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned)arg4 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)driverClassName;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(BOOL)isSettable;
-(id)initWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 andObjectClassID:(unsigned)arg6 ;
-(id)initWithValue:(BOOL)arg1 isSettable:(BOOL)arg2 forElement:(unsigned)arg3 inScope:(unsigned)arg4 withPlugin:(id)arg5 ;
@end

