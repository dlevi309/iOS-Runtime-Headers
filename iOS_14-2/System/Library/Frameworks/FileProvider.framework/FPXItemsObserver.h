/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPXObserver.h>
#import <libobjc.A.dylib/NSFileProviderEnumerationObserver.h>

@class NSMutableArray, NSData, NSString;

@interface FPXItemsObserver : FPXObserver <NSFileProviderEnumerationObserver> {

	NSMutableArray* _items;
	/*^block*/id _finishedBlock;
	NSData* _syncAnchor;

}

@property (copy) id finishedBlock;                                  //@synthesize finishedBlock=_finishedBlock - In the implementation block
@property (copy) NSData * syncAnchor;                               //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)syncAnchor;
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 ;
-(void)finishEnumeratingWithError:(id)arg1 ;
-(void)setSyncAnchor:(NSData *)arg1 ;
-(void)didEnumerateItems:(id)arg1 ;
-(void)finishEnumeratingUpToPage:(id)arg1 ;
-(id)finishedBlock;
-(void)setFinishedBlock:(id)arg1 ;
@end

