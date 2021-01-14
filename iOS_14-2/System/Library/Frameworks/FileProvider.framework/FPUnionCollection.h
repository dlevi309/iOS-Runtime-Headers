/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPItemCollection.h>

@class NSArray;

@interface FPUnionCollection : FPItemCollection {

	NSArray* _collections;

}

@property (nonatomic,retain) NSArray * collections;              //@synthesize collections=_collections - In the implementation block
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)description;
-(id)initWithCollections:(id)arg1 ;
-(NSArray *)collections;
-(void)setCollections:(NSArray *)arg1 ;
@end

