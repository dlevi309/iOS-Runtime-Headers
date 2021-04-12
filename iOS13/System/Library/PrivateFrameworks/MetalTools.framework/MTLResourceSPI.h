/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class MTLResourceAllocationInfo;


@protocol MTLResourceSPI <MTLResource>
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
@property (readonly) unsigned long long allocationID; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@required
-(BOOL)isComplete;
-(void)waitUntilComplete;
-(unsigned long long)protectionOptions;
-(BOOL)isPurgeable;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
-(BOOL)doesAliasResource:(id)arg1;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1;
-(MTLResourceAllocationInfo *)sharedAllocationInfo;
-(MTLResourceAllocationInfo *)cachedAllocationInfo;
-(unsigned long long)allocationID;
-(unsigned long long)unfilteredResourceOptions;

@end

