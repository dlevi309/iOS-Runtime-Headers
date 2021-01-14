/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPExternalReferenceDelegate
@required
-(id)objectForIdentifier:(long long)arg1;
-(long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 objectUUIDOrNil:(id)arg3 outComponentIsVersioned:(BOOL*)arg4;
-(BOOL)wasComponentCopied:(long long)arg1;
-(id)explicitComponentRootObjectForObject:(id)arg1;

@end

