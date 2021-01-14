/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


@protocol __NSTextRunStorageDataSource, NSTextLocation;
@class NSMutableRLEArray, NSStorage, NSTextRange;

@interface _NSTextRunStorage : NSObject {

	id<__NSTextRunStorageDataSource> _dataSource;
	NSMutableRLEArray* _RLEArray;
	NSStorage* _elements;
	NSTextRange* _seedRange;
	long long _seedElementIndex;
	BOOL _isCountable;
	BOOL _hasBaseLocation;
	BOOL _mapsLocationOffset;
	id<NSTextLocation> _baseLocation;

}

@property (readonly) long long baseIndex; 
@property (readonly) id<NSTextLocation> baseLocation; 
@property (readonly) id<__NSTextRunStorageDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(long long)baseIndex;
-(id)initWithDataSource:(id)arg1 ;
-(id<__NSTextRunStorageDataSource>)dataSource;
-(id)description;
-(id)enumerateObjectsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setObject:(id)arg1 forRange:(id)arg2 ;
-(void)invalidateElementsInRange:(id)arg1 delta:(long long)arg2 ;
-(id<NSTextLocation>)baseLocation;
-(void)dealloc;
@end

