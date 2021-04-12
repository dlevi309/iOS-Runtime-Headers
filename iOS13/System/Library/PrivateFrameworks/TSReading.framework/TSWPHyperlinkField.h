/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSWPSmartField.h>

@class NSURL, NSString;

@interface TSWPHyperlinkField : TSWPSmartField {

	NSURL* _url;

}

@property (setter=setURL:,nonatomic,retain) NSURL * url; 
@property (nonatomic,readonly) NSString * displayText; 
+(BOOL)schemeIsValidForURL:(id)arg1 ;
+(BOOL)schemeIsValidForURLReference:(id)arg1 ;
+(id)defaultURLFromDefaultsKey:(id)arg1 defaultValue:(id)arg2 ;
+(id)defaultFileURL;
+(id)defaultMailURL;
+(id)newURLFromURLReference:(id)arg1 ;
+(id)urlReferenceFromURL:(id)arg1 ;
+(int)schemeFromURL:(id)arg1 ;
+(id)defaultFieldStyleIdentifier;
+(id)defaultWebURL;
-(void)dealloc;
-(int)scheme;
-(BOOL)isFileURL;
-(NSURL *)url;
-(void)setURL:(id)arg1 ;
-(id)fullPath;
-(int)elementKind;
-(BOOL)allowsEditing;
-(id)filePath;
-(NSString *)displayText;
-(BOOL)hasDisplayText;
-(id)copyWithContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 url:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)canonicalRepresentationURL;
-(id)urlReference;
-(void)setURLReference:(id)arg1 ;
-(id)urlPrefix;
@end

