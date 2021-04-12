/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDNanoSyncEntity <HDSyncEntity>
@optional
+(int)nanoSyncObjectType;
+(BOOL)supportsSpeculativeNanoSyncChanges;
+(BOOL)companionDidChangeForProfile:(id)arg1 error:(id*)arg2;

@required
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;

@end

