/*
* Generated on Thursday, January 14, 2021 at 2:29:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/log/liblog_geo.dylib
*/

#import <liblog_geo.dylib/liblog_geo.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface Multipart : NSObject <NSCopying> {

	unsigned long long identifier;
	unsigned char partIndex;
	unsigned char partCount;

}
-(id)copyWithIndex:(unsigned char)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToMultipart:(id)arg1 ;
@end

