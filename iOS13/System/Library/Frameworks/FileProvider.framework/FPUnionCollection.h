/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPItemCollection.h>

@class NSArray;

@interface FPUnionCollection : FPItemCollection {

	NSArray* _collections;

}

@property (nonatomic,retain) NSArray * collections;              //@synthesize collections=_collections - In the implementation block
-(id)description;
-(NSArray *)collections;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)initWithCollections:(id)arg1 ;
-(void)setCollections:(NSArray *)arg1 ;
@end

