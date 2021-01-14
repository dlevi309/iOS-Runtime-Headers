/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {

	int mIndex;
	OADColor* mColor;

}
-(int)index;
-(id)color;
-(void)setIndex:(int)arg1 ;
-(id)description;
-(void)setColor:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)applyToParagraphProperties:(id)arg1 ;
@end

