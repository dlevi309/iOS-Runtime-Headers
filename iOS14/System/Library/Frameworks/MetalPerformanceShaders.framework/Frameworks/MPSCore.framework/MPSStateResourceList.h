/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


#import <MPSCore/MPSCore-Structs.h>
@interface MPSStateResourceList : NSObject {

	ResourceListNode* _list;

}
+(id)resourceList;
+(id)resourceListWithBufferSizes:(unsigned long long)arg1 ;
+(id)resourceListWithTextureDescriptors:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(void)appendBuffer:(unsigned long long)arg1 ;
-(void)appendTexture:(id)arg1 format:(unsigned long long)arg2 ;
-(void)appendTexture:(id)arg1 ;
-(void)dealloc;
@end

