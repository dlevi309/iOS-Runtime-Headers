/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)size;
-(unsigned long long)start;
-(unsigned long long)end;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setSegment:(unsigned char)arg1 ;
-(unsigned char)segment;
-(void)setStart:(unsigned long long)arg1 ;
-(NSString *)ownerPath;
-(void)setOwnerPath:(NSString *)arg1 ;
@end

