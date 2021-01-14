/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, NSString;

@interface OADTextListStyle : NSObject {

	NSMutableArray* mParagraphProperties;
	NSString* mLanguage;

}

@property (nonatomic,retain) NSString * language; 
+(id)defaultObject;
-(id)init;
-(void)setLanguage:(NSString *)arg1 ;
-(id)description;
-(void)flatten;
-(id)defaultProperties;
-(NSString *)language;
-(id)initWithDefaults;
-(id)propertiesForListLevel:(unsigned long long)arg1 ;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)setPropertiesForListLevel:(unsigned long long)arg1 properties:(id)arg2 ;
-(void)overrideWithTextStyle:(id)arg1 ;
-(void)enumerateParagraphPropertiesUsingBlock:(/*^block*/id)arg1 ;
@end

