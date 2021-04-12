/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

