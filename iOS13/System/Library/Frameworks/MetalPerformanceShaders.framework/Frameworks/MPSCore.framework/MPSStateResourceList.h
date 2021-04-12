/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/


#import <MPSCore/MPSCore-Structs.h>
@interface MPSStateResourceList : NSObject {

	ResourceListNode* _list;

}
+(id)resourceList;
+(id)resourceListWithTextureDescriptors:(id)arg1 ;
+(id)resourceListWithBufferSizes:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)appendTexture:(id)arg1 ;
-(void)appendBuffer:(unsigned long long)arg1 ;
-(void)appendTexture:(id)arg1 format:(unsigned long long)arg2 ;
@end

