/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDNanoSyncEntity <HDSyncEntity>
@optional
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+(BOOL)companionDidChangeForProfile:(id)arg1 error:(id*)arg2;
+(BOOL)supportsSpeculativeNanoSyncChanges;
+(int)nanoSyncObjectType;

@end

