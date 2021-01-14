/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface TSPDocumentResourceTagAnalyzer : NSObject <NSFastEnumeration> {

	NSMutableDictionary* _tagsToDocumentResourceInfosDictionary;
	NSMutableSet* _documentResourceInfos;
	NSMutableSet* _untaggedDocumentResourceInfos;

}

@property (nonatomic,copy,readonly) NSSet * allTags; 
@property (nonatomic,copy,readonly) NSSet * allDocumentResourceInfos; 
@property (nonatomic,copy,readonly) NSSet * untaggedDocumentResourceInfos; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS174*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSSet *)allTags;
-(id)description;
-(void)addDocumentResourceInfo:(id)arg1 ;
-(id)minimumTagsWithPreferredTags:(id)arg1 ;
-(NSSet *)allDocumentResourceInfos;
-(NSSet *)untaggedDocumentResourceInfos;
@end

