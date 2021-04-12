/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/log/liblog_geo.dylib
*/

#import <liblog_geo.dylib/liblog_geo.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface Multipart : NSObject <NSCopying> {

	unsigned long long identifier;
	unsigned char partIndex;
	unsigned char partCount;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyWithIndex:(unsigned char)arg1 ;
-(BOOL)isEqualToMultipart:(id)arg1 ;
@end

