/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@class NSError;

@interface FPDIterator : NSObject {

	BOOL _skipMaterializedTreeTraversal;
	BOOL _shouldDecorateItems;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long numFoldersPopped; 
@property (nonatomic,readonly) BOOL done; 
@property (assign,nonatomic) BOOL skipMaterializedTreeTraversal;                 //@synthesize skipMaterializedTreeTraversal=_skipMaterializedTreeTraversal - In the implementation block
@property (assign,nonatomic) BOOL shouldDecorateItems;                           //@synthesize shouldDecorateItems=_shouldDecorateItems - In the implementation block
+(id)iteratorForLocator:(id)arg1 manager:(id)arg2 ;
+(id)iteratorForLocator:(id)arg1 provider:(id)arg2 ;
-(NSError *)error;
-(BOOL)done;
-(id)nextItem;
-(BOOL)shouldDecorateItems;
-(BOOL)skipMaterializedTreeTraversal;
-(id)nextWithError:(id*)arg1 ;
-(unsigned long long)numFoldersPopped;
-(void)setShouldDecorateItems:(BOOL)arg1 ;
-(void)setSkipMaterializedTreeTraversal:(BOOL)arg1 ;
@end

