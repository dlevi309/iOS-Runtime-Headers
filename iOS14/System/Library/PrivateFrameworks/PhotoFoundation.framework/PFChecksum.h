/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFChecksum : NSObject <NSCopying> {

	PFChecksumBytes _bytes;

}
-(id)initWithString:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytes:(PFChecksumBytes)arg1 ;
-(PFChecksumBytes)checksumBytes;
-(id)initWithChecksumAsData:(id)arg1 ;
-(BOOL)isEqualToBytes:(PFChecksumBytes)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

