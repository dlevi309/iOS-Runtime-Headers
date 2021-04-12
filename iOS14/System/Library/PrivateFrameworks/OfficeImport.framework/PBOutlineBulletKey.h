/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBOutlineBulletKey : NSObject <NSCopying> {

	unsigned mSlideId;
	int mTextType;
	unsigned mPlaceholderIndex;

}
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOutlineBullet:(id)arg1 ;
-(id)initWithSlideId:(unsigned)arg1 textType:(int)arg2 placeholderIndex:(unsigned)arg3 ;
@end

