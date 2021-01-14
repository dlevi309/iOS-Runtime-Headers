/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {

	EDResources* mResources;
	int mSystemColorID;
	unsigned long long mColorIndex;
	unsigned long long mThemeIndex;
	double mTint;

}
+(id)colorReferenceWithColorIndex:(unsigned long long)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithResources:(id)arg1 ;
+(id)colorReferenceWithColor:(id)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithThemeIndex:(unsigned long long)arg1 tint:(double)arg2 resources:(id)arg3 ;
+(id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2 ;
-(id)color;
-(unsigned long long)themeIndex;
-(id)description;
-(BOOL)isValid;
-(unsigned long long)hash;
-(double)tint;
-(id)initWithResources:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)systemColorID;
-(BOOL)isEqualToColorReference:(id)arg1 ;
-(unsigned long long)colorIndex;
-(id)initWithColor:(id)arg1 resources:(id)arg2 ;
@end

