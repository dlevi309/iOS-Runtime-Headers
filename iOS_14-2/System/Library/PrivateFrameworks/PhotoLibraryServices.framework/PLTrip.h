/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray;

@interface PLTrip : NSObject {

	unsigned long long _type;
	NSArray* _items;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
-(NSArray *)items;
-(id)description;
-(unsigned long long)type;
-(id)initWithItems:(id)arg1 type:(unsigned long long)arg2 ;
-(double)duration;
-(id)typeDescription;
@end

