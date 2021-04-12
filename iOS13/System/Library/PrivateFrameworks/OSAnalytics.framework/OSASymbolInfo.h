/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/


@class NSString;

@interface OSASymbolInfo : NSObject {

	unsigned char _uuid[16];
	NSString* legacy_name;
	NSString* legacy_arch;
	BOOL _isAppleCode;
	unsigned long long _start;
	unsigned long long _size;
	NSString* _path;

}

@property (assign) unsigned long long start;              //@synthesize start=_start - In the implementation block
@property (assign) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (readonly) NSString * path;                     //@synthesize path=_path - In the implementation block
@property (assign) BOOL isAppleCode;                      //@synthesize isAppleCode=_isAppleCode - In the implementation block
-(unsigned long long)size;
-(NSString *)path;
-(unsigned long long)start;
-(void)setPath:(NSString *)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setStart:(unsigned long long)arg1 ;
-(id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3 ;
-(id)initWithSharedCache:(unsigned char)arg1 atBaseAddress:(unsigned long long)arg2 ;
-(id)get_uuid;
-(BOOL)isAppleCode;
-(void)setIsAppleCode:(BOOL)arg1 ;
@end

