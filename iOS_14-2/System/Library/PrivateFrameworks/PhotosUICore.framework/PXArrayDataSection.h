/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDataSection.h>

@class NSArray;

@interface PXArrayDataSection : PXDataSection {

	NSArray* _sectionContent;

}

@property (nonatomic,copy,readonly) NSArray * sectionContent;              //@synthesize sectionContent=_sectionContent - In the implementation block
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PX44*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(long long)indexOfObject:(id)arg1 ;
-(long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(id)initWithOutlineObject:(id)arg1 ;
-(id)initWithOutlineObject:(id)arg1 sectionContent:(id)arg2 ;
-(id)initWithSectionContent:(id)arg1 ;
-(long long)validatedIndexOfObject:(id)arg1 hintIndex:(long long)arg2 ;
-(NSArray *)sectionContent;
@end

