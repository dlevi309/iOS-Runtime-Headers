/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUParameterNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _AUStaticParameterInfo, NSString;

@interface AUParameter : AUParameterNode <NSSecureCoding> {

	BOOL __localValueStale;
	float _value;
	int _numUIObservers;
	int _numRecordingObservers;
	unsigned long long _address;
	NSArray* _dependentParameters;
	_AUStaticParameterInfo* _info;

}

@property (assign,nonatomic) unsigned long long address;                        //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) _AUStaticParameterInfo * info;                     //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) BOOL _localValueStale;                             //@synthesize _localValueStale=__localValueStale - In the implementation block
@property (assign,nonatomic) int numUIObservers;                                //@synthesize numUIObservers=_numUIObservers - In the implementation block
@property (assign,nonatomic) int numRecordingObservers;                         //@synthesize numRecordingObservers=_numRecordingObservers - In the implementation block
@property (nonatomic,readonly) float minValue; 
@property (nonatomic,readonly) float maxValue; 
@property (nonatomic,readonly) unsigned unit; 
@property (nonatomic,copy,readonly) NSString * unitName; 
@property (nonatomic,readonly) unsigned flags; 
@property (nonatomic,copy,readonly) NSArray * valueStrings; 
@property (nonatomic,copy,readonly) NSArray * dependentParameters;              //@synthesize dependentParameters=_dependentParameters - In the implementation block
@property (assign,nonatomic) float value;                                       //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)flags;
-(float)value;
-(unsigned)unit;
-(void)setValue:(float)arg1 ;
-(unsigned long long)address;
-(_AUStaticParameterInfo *)info;
-(void)setInfo:(_AUStaticParameterInfo *)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(float)maxValue;
-(float)minValue;
-(float)valueFromString:(id)arg1 ;
-(id)stringFromValue:(const float*)arg1 ;
-(void)set_localValueStale:(BOOL)arg1 ;
-(void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3 ;
-(unsigned)_clumpID;
-(NSArray *)valueStrings;
-(NSString *)unitName;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2 ;
-(void)setValue:(float)arg1 extOriginator:(AUParameterObserverExtendedToken)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned)arg4 ;
-(id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned)arg6 unitName:(id)arg7 flags:(unsigned)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10 ;
-(float)_internalValue;
-(void)setValue:(float)arg1 originator:(void*)arg2 ;
-(void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned)arg4 ;
-(void)set_clumpID:(unsigned)arg1 ;
-(NSArray *)dependentParameters;
-(BOOL)_localValueStale;
-(int)numUIObservers;
-(void)setNumUIObservers:(int)arg1 ;
-(int)numRecordingObservers;
-(void)setNumRecordingObservers:(int)arg1 ;
@end

