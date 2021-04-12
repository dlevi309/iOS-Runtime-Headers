/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFChecksum : NSObject <NSCopying> {

	PFChecksumBytes _bytes;

}
-(id)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithBytes:(PFChecksumBytes)arg1 ;
-(id)initWithChecksumAsData:(id)arg1 ;
-(PFChecksumBytes)checksumBytes;
-(BOOL)isEqualToBytes:(PFChecksumBytes)arg1 ;
@end

