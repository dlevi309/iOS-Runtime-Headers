/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSArray, NSDictionary;

@interface FCFeedViewportDiff : NSObject {

	NSString* _viewportIdentifier;
	NSArray* _insertedElements;
	NSDictionary* _insertedElementsIndices;
	NSArray* _deletedElements;
	NSDictionary* _deletedElementsIndices;
	NSArray* _modifiedElements;
	NSDictionary* _modifiedElementsIndices;
	NSArray* _groupDiffs;

}

@property (nonatomic,copy,readonly) NSString * viewportIdentifier;                       //@synthesize viewportIdentifier=_viewportIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * insertedElements;                          //@synthesize insertedElements=_insertedElements - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * insertedElementsIndices;              //@synthesize insertedElementsIndices=_insertedElementsIndices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedElements;                           //@synthesize deletedElements=_deletedElements - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * deletedElementsIndices;               //@synthesize deletedElementsIndices=_deletedElementsIndices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifiedElements;                          //@synthesize modifiedElements=_modifiedElements - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * modifiedElementsIndices;              //@synthesize modifiedElementsIndices=_modifiedElementsIndices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupDiffs;                                //@synthesize groupDiffs=_groupDiffs - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
-(id)init;
-(id)initWithViewportIdentifier:(id)arg1 insertedElements:(id)arg2 insertedElementsIndices:(id)arg3 deletedElements:(id)arg4 deletedElementsIndices:(id)arg5 modifiedElements:(id)arg6 modifiedElementsIndices:(id)arg7 groupDiffs:(id)arg8 ;
-(NSDictionary *)insertedElementsIndices;
-(NSArray *)groupDiffs;
-(NSArray *)deletedElements;
-(NSString *)viewportIdentifier;
-(NSArray *)modifiedElements;
-(NSDictionary *)deletedElementsIndices;
-(BOOL)isEmpty;
-(NSArray *)insertedElements;
-(NSDictionary *)modifiedElementsIndices;
@end

