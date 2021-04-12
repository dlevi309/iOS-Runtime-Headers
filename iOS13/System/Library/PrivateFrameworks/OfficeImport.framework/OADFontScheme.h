/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(BOOL)isEmpty;
-(void)setName:(NSString *)arg1 ;
-(OADFontCollection *)majorFont;
-(OADFontCollection *)minorFont;
-(id)fontForId:(int)arg1 ;
-(void)validateFontScheme;
@end

