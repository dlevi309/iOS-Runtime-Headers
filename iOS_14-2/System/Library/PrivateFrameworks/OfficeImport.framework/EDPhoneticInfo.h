/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDImmutableObject.h>

@class EDResources, NSString, EDCollection;

@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject> {

	EDResources* mResources;
	unsigned long long mFontIndex;
	NSString* mString;
	int mType;
	int mAlign;
	EDCollection* mRuns;
	BOOL mDoNotModify;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phoneticInfoWithResources:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(int)align;
-(id)runs;
-(void)setType:(int)arg1 ;
-(NSString *)description;
-(void)prependString:(id)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(id)string;
-(unsigned long long)fontIndex;
-(id)initWithResources:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)font;
-(void)setAlign:(int)arg1 ;
-(void)setDoNotModify:(BOOL)arg1 ;
-(BOOL)isEqualToEDPhoneticInfo:(id)arg1 ;
@end

