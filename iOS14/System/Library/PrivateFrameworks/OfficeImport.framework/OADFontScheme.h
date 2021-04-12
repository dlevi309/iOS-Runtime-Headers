/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, OADFontCollection;

@interface OADFontScheme : NSObject {

	NSString* _name;
	OADFontCollection* _majorFont;
	OADFontCollection* _minorFont;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) OADFontCollection * majorFont;              //@synthesize majorFont=_majorFont - In the implementation block
@property (nonatomic,readonly) OADFontCollection * minorFont;              //@synthesize minorFont=_minorFont - In the implementation block
-(id)init;
-(NSString *)name;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg1 ;
-(OADFontCollection *)minorFont;
-(OADFontCollection *)majorFont;
-(id)fontForId:(int)arg1 ;
-(void)validateFontScheme;
@end

