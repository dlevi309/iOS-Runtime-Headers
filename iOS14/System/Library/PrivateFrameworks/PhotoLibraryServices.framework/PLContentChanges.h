/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMutableArray;

@interface PLContentChanges : NSObject {

	NSMutableArray* _container;
	NSMutableArray* _updatedContent;

}

@property (nonatomic,retain) NSMutableArray * container;                   //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedContent;              //@synthesize updatedContent=_updatedContent - In the implementation block
-(void)cleanupState;
-(void)setContainer:(NSMutableArray *)arg1 ;
-(void)setUpdatedContent:(NSMutableArray *)arg1 ;
-(NSMutableArray *)updatedContent;
-(NSMutableArray *)container;
@end

