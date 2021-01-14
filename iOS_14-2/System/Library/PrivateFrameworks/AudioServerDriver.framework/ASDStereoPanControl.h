/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDControl.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ASDStereoPanControl : ASDControl {

	float _value;
	NSObject*<OS_dispatch_queue> _valueQueue;
	unsigned _leftPanChannel;
	unsigned _rightPanChannel;
	BOOL _settable;

}

@property (assign,nonatomic) float value; 
@property (assign,nonatomic) unsigned leftPanChannel; 
@property (assign,nonatomic) unsigned rightPanChannel; 
@property (getter=isSettable,nonatomic,readonly) BOOL settable;              //@synthesize settable=_settable - In the implementation block
-(void)setValue:(float)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(float)value;
-(BOOL)changeValue:(float)arg1 ;
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
-(id)initWithValue:(float)arg1 leftPanChannel:(unsigned)arg2 rightPanChannel:(unsigned)arg3 isSettable:(BOOL)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 andObjectClassID:(unsigned)arg8 ;
-(unsigned)leftPanChannel;
-(unsigned)rightPanChannel;
-(void)setPanChannel:(unsigned)arg1 isLeft:(BOOL)arg2 ;
-(id)initWithValue:(float)arg1 leftPanChannel:(unsigned)arg2 rightPanChannel:(unsigned)arg3 isSettable:(BOOL)arg4 forElement:(unsigned)arg5 inScope:(unsigned)arg6 withPlugin:(id)arg7 ;
-(void)setLeftPanChannel:(unsigned)arg1 ;
-(void)setRightPanChannel:(unsigned)arg1 ;
@end

