/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface MLMediaTypeCountedSet : NSObject {

	map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > >* _map;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)description;
-(void)addMediaType:(unsigned)arg1 count:(unsigned long long)arg2 ;
-(void)enumerateMediaTypesWithBlock:(/*^block*/id)arg1 ;
@end

