/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <libobjc.A.dylib/NSFileProviderEnumerationObserver.h>

@class NSMutableArray, NSData, NSString;

@interface LiveFSFPTrashObserver : NSObject <NSFileProviderEnumerationObserver> {

	NSMutableArray* _items;
	/*^block*/id _completionHandler;
	NSData* _lastPage;

}

@property (retain) NSMutableArray * items;                          //@synthesize items=_items - In the implementation block
@property (copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (retain,readonly) NSData * lastPage;                      //@synthesize lastPage=_lastPage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSData *)lastPage;
-(void)finishEnumeratingWithError:(id)arg1 ;
-(void)didEnumerateItems:(id)arg1 ;
-(void)finishEnumeratingUpToPage:(id)arg1 ;
@end

