/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/QLListCellDataGenerationOperationDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSOperationQueue, NSString;

@interface QLListCellManager : NSObject <QLListCellDataGenerationOperationDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _operations;
	NSOperationQueue* _generationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * operations;                //@synthesize operations=_operations - In the implementation block
@property (nonatomic,retain) NSOperationQueue * generationQueue;              //@synthesize generationQueue=_generationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)operations;
-(void)setOperations:(NSMutableDictionary *)arg1 ;
-(NSOperationQueue *)generationQueue;
-(void)_operationDidFinish:(id)arg1 ;
-(void)setupCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)operation:(id)arg1 didGenerateThumbnail:(id)arg2 ;
-(void)operation:(id)arg1 didDetermineFileSize:(id)arg2 fileTypeString:(id)arg3 ;
-(void)setGenerationQueue:(NSOperationQueue *)arg1 ;
@end

