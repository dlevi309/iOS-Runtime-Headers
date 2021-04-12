/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBOutlineBulletKey : NSObject <NSCopying> {

	unsigned mSlideId;
	int mTextType;
	unsigned mPlaceholderIndex;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOutlineBullet:(id)arg1 ;
-(id)initWithSlideId:(unsigned)arg1 textType:(int)arg2 placeholderIndex:(unsigned)arg3 ;
@end

