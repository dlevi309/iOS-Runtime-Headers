/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLResourceSPI <MTLResource>
@property (assign) int responsibleProcess; 
@property (readonly) unsigned long long allocationID; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@required
-(BOOL)isComplete;
-(unsigned long long)protectionOptions;
-(void)waitUntilComplete;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1;
-(unsigned long long)allocationID;
-(unsigned long long)unfilteredResourceOptions;
-(BOOL)isPurgeable;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
-(BOOL)doesAliasResource:(id)arg1;

@end

