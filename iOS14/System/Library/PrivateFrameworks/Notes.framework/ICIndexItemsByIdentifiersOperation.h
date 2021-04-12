/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <Notes/ICIndexItemsOperation.h>

@class NSArray;

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation {

	NSArray* _objectIDURIsToIndex;

}

@property (nonatomic,copy) NSArray * objectIDURIsToIndex;              //@synthesize objectIDURIsToIndex=_objectIDURIsToIndex - In the implementation block
-(void)main;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 objectIDURIsToIndex:(id)arg3 ;
-(void)setObjectIDURIsToIndex:(NSArray *)arg1 ;
-(NSArray *)objectIDURIsToIndex;
@end

