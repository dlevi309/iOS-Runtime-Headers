/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(id)color;
-(double)tint;
-(unsigned long long)themeIndex;
-(id)initWithResources:(id)arg1 ;
-(int)systemColorID;
-(BOOL)isEqualToColorReference:(id)arg1 ;
-(unsigned long long)colorIndex;
-(id)initWithColor:(id)arg1 resources:(id)arg2 ;
@end

