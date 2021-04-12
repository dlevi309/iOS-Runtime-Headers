/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {

	NSString* mName;
	NSMutableArray* mAlternateNames;
	int mFontFamily;
	int mCharacterSet;
	int mPitch;

}
+(int)cpFontClassFromWdFontFamily:(int)arg1 ;
-(id)alternateNames;
-(int)pitch;
-(id)init;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(int)characterSet;
-(id)description;
-(void)setCharacterSet:(int)arg1 ;
-(unsigned long long)hash;
-(void)setName:(id)arg1 ;
-(void)setPitch:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)fontFamily;
-(void)setFontFamily:(int)arg1 ;
-(void)addAlternateName:(id)arg1 ;
-(id)secondName;
@end

