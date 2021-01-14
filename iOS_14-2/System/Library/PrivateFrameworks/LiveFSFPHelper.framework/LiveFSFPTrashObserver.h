/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)lastPage;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSMutableArray *)items;
-(void)finishEnumeratingWithError:(id)arg1 ;
-(void)didEnumerateItems:(id)arg1 ;
-(void)finishEnumeratingUpToPage:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end

