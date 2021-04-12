/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray;

@interface PLContentChanges : NSObject {

	NSMutableArray* _container;
	NSMutableArray* _updatedContent;

}

@property (nonatomic,retain) NSMutableArray * container;                   //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedContent;              //@synthesize updatedContent=_updatedContent - In the implementation block
-(NSMutableArray *)container;
-(void)setContainer:(NSMutableArray *)arg1 ;
-(void)cleanupState;
-(NSMutableArray *)updatedContent;
-(void)setUpdatedContent:(NSMutableArray *)arg1 ;
@end

