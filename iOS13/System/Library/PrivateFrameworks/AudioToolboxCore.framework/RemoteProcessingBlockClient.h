/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@interface RemoteProcessingBlockClient : NSObject
+(int)addRPBListener:(id)arg1 ;
+(int)removeRPBListener:(id)arg1 ;
+(int)addRPBPropertyListener:(id)arg1 inPropertyID:(unsigned)arg2 inServerID:(unsigned)arg3 inRPBlockID:(unsigned)arg4 ;
+(int)removeRPBPropertyListener:(id)arg1 inPropertyID:(unsigned)arg2 inServerID:(unsigned)arg3 inRPBlockID:(unsigned)arg4 ;
+(int)copyProperty:(unsigned)arg1 inRPBlockID:(unsigned)arg2 inPropertyID:(unsigned)arg3 outData:(id*)arg4 ;
+(int)setProperty:(unsigned)arg1 inRPBlockID:(unsigned)arg2 inPropertyID:(unsigned)arg3 inData:(id)arg4 ;
+(int)copyItemProperty:(unsigned)arg1 inRPBlockID:(unsigned)arg2 inItemID:(unsigned)arg3 inPropertyID:(unsigned)arg4 inScope:(unsigned)arg5 inElement:(unsigned)arg6 outData:(id*)arg7 ;
+(int)setItemProperty:(unsigned)arg1 inRPBlockID:(unsigned)arg2 inItemID:(unsigned)arg3 inPropertyID:(unsigned)arg4 inScope:(unsigned)arg5 inElement:(unsigned)arg6 inData:(id)arg7 ;
+(int)getItemParameter:(unsigned)arg1 inRPBlockID:(unsigned)arg2 inItemID:(unsigned)arg3 inParameterID:(unsigned)arg4 inScope:(unsigned)arg5 inElement:(unsigned)arg6 outValue:(float*)arg7 ;
+(int)setItemParameter:(unsigned)arg1 inRPBlockID:(unsigned)arg2 inItemID:(unsigned)arg3 inParameterID:(unsigned)arg4 inScope:(unsigned)arg5 inElement:(unsigned)arg6 inValue:(float)arg7 ;
@end

