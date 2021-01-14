/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADColor;

@interface OADGradientFillStop : NSObject <NSCopying> {

	OADColor* mColor;
	float mPosition;

}
+(void)addStopWithColor:(id)arg1 position:(float)arg2 toArray:(id)arg3 ;
-(float)position;
-(id)color;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)usesPlaceholderColor;
-(id)initWithColor:(id)arg1 position:(float)arg2 ;
@end

