/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol FxParameterAPIPrivate
@required
-(BOOL)addLevelsWithName:(id)arg1 parmId:(unsigned)arg2 hideGamma:(BOOL)arg3 parmFlags:(unsigned)arg4;
-(BOOL)addPopupMenuWithNameAndTags:(id)arg1 parmId:(unsigned)arg2 defaultValue:(unsigned)arg3 menuEntries:(id)arg4 tags:(const int*)arg5 tagCount:(int)arg6 parmFlags:(unsigned)arg7;
-(BOOL)setCustomParameterDefaultValue:(id)arg1 parmId:(unsigned)arg2;
-(BOOL)add2DVectorWithName:(id)arg1 parmId:(unsigned)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned)arg5;
-(id)getAllParameterValuesAtTime:(SCD_Struct_PV22)arg1 transactionID:(unsigned long long)arg2 pluginSessionID:(unsigned long long)arg3;
-(void)setupImageParamIDs:(void*)arg1;
-(BOOL)hasPathParameters;
-(id)transactionForParameterID:(unsigned)arg1 atTime:(SCD_Struct_PV22)arg2 transactionID:(unsigned long long)arg3 pluginSessionID:(unsigned long long)arg4;

@end

