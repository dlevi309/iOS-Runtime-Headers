/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray;

@interface OITSUIndexedStringStore : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _indexByString;
	NSMutableArray* _stringByIndex;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)stringForIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForString:(id)arg1 ;
@end

