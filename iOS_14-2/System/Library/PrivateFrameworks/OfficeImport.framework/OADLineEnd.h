/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADLineEnd : OADProperties <NSCopying> {

	unsigned char mType;
	unsigned char mWidth;
	unsigned char mLength;
	unsigned mIsTypeOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsLengthOverridden : 1;

}
+(id)defaultProperties;
+(id)stringForLineEndType:(unsigned char)arg1 ;
+(id)stringForLineEndWidth:(unsigned char)arg1 ;
+(id)stringForLineEndLength:(unsigned char)arg1 ;
-(void)setLength:(unsigned char)arg1 ;
-(unsigned char)width;
-(void)setWidth:(unsigned char)arg1 ;
-(unsigned char)length;
-(void)setType:(unsigned char)arg1 ;
-(id)description;
-(unsigned char)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isWidthOverridden;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isTypeOverridden;
-(BOOL)isLengthOverridden;
-(id)initWithType:(unsigned char)arg1 width:(unsigned char)arg2 length:(unsigned char)arg3 ;
@end

