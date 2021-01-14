/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPComponentWriterDelegate <NSObject>
@optional
-(void)componentWriterNeedsDocumentRecovery:(id)arg1;
-(id)componentWriter:(id)arg1 locatorForClaimingComponent:(id)arg2;
-(BOOL)componentWriter:(id)arg1 object:(id)arg2 belongsToCopiedComponent:(id)arg3;
-(BOOL)componentWriter:(id)arg1 externalPackageDidWriteObject:(id)arg2 claimingComponent:(id*)arg3 componentReadVersion:(unsigned long long*)arg4;
-(BOOL)componentWriter:(id)arg1 shouldDelayWritingObject:(id)arg2;

@required
-(unsigned long long)objectTargetTypeForComponentWriter:(id)arg1;
-(id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 archiverOrNil:(id)arg3 claimingComponent:(id)arg4 hasArchiverAccessLock:(BOOL)arg5;
-(void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(/*^block*/id)arg4;
-(id)componentWriterWantsDelayedObjects:(id)arg1;
-(id)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 componentReadVersion:(unsigned long long*)arg3;

@end

