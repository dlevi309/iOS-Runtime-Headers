/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <libobjc.A.dylib/NSFileProviderEnumerator.h>

@class LiveFSFPExtensionHelper, LiveFSFPItemHelper, NSString;

@interface LiveFSFPClusterEnumeratorHelper : NSObject <NSFileProviderEnumerator> {

	LiveFSFPExtensionHelper* ext;
	BOOL _isDir;
	int _state;
	LiveFSFPItemHelper* _enumeratedItem;

}

@property (readonly) BOOL isDir;                                                 //@synthesize isDir=_isDir - In the implementation block
@property (assign) int state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) LiveFSFPItemHelper * enumeratedItem;              //@synthesize enumeratedItem=_enumeratedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithEnumeratedItem:(id)arg1 extension:(id)arg2 error:(id*)arg3 ;
-(void)invalidate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(LiveFSFPItemHelper *)enumeratedItem;
-(void)doShutdown;
-(BOOL)isDir;
-(id)initWithEnumeratedItem:(id)arg1 extension:(id)arg2 error:(id*)arg3 ;
@end

