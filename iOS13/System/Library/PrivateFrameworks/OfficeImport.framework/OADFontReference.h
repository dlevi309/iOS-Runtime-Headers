/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {

	int mIndex;
	OADColor* mColor;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)index;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setIndex:(int)arg1 ;
-(void)applyToParagraphProperties:(id)arg1 ;
@end

