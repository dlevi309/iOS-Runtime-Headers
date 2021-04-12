/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@interface RemoteProcessingBlockServer : NSObject
+(int)registerRPB:(id)arg1 outRPBlockID:(unsigned*)arg2 ;
+(int)unregisterRPB:(unsigned)arg1 ;
+(int)registerItem:(unsigned*)arg1 inRPBlockID:(unsigned)arg2 ;
+(int)unregisterItem:(unsigned)arg1 inRPBlockID:(unsigned)arg2 ;
+(int)propertiesChanged:(unsigned)arg1 inPropertyIDs:(id)arg2 ;
+(int)propertyChanged:(unsigned)arg1 inPropertyID:(unsigned)arg2 ;
+(int)itemPropertyChanged:(unsigned)arg1 inItemID:(unsigned)arg2 inPropertyID:(unsigned)arg3 ;
+(int)itemParameterChanged:(unsigned)arg1 inItemID:(unsigned)arg2 inParmameterID:(unsigned)arg3 inParameterValue:(float)arg4 ;
@end

