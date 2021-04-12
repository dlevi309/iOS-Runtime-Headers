/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)start;
-(unsigned long long)size;
-(void)setPath:(NSString *)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)path;
-(id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3 ;
-(id)initWithSharedCache:(unsigned char)arg1 atBaseAddress:(unsigned long long)arg2 ;
-(BOOL)isAppleCode;
-(void)setIsAppleCode:(BOOL)arg1 ;
-(id)get_uuid;
-(void)setStart:(unsigned long long)arg1 ;
@end

