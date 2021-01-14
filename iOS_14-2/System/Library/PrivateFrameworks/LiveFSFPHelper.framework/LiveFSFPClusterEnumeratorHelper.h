/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isDir;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)invalidate;
-(LiveFSFPItemHelper *)enumeratedItem;
-(void)doShutdown;
-(id)initWithEnumeratedItem:(id)arg1 extension:(id)arg2 error:(id*)arg3 ;
@end

