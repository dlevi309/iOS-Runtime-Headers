/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)indexForString:(id)arg1 ;
-(id)stringForIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)dealloc;
@end

