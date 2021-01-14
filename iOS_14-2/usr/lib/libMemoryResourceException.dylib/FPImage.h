/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


@class NSString;

@interface FPImage : NSObject {

	unsigned char _segment;
	unsigned long long _start;
	unsigned long long _size;
	NSString* _name;
	NSString* _ownerPath;

}

@property (assign,nonatomic) unsigned char segment;                 //@synthesize segment=_segment - In the implementation block
@property (assign,nonatomic) unsigned long long start;              //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long end; 
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * ownerPath;                    //@synthesize ownerPath=_ownerPath - In the implementation block
-(unsigned long long)end;
-(unsigned char)segment;
-(unsigned long long)start;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setStart:(unsigned long long)arg1 ;
-(void)setSegment:(unsigned char)arg1 ;
-(NSString *)ownerPath;
-(void)setOwnerPath:(NSString *)arg1 ;
@end

