/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface MTLBinaryArchiveDescriptor : NSObject <NSCopying> {

	NSURL* _url;
	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long writingOptions; 
@property (nonatomic,copy) NSURL * url;                                      //@synthesize url=_url - In the implementation block
-(unsigned long long)writingOptions;
-(id)init;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(unsigned long long)hash;
-(void)setWritingOptions:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

