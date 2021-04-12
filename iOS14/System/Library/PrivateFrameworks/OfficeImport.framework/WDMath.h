/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSString;

@interface WDMath : WDRun {

	int _justification;
	WDCharacterProperties* _properties;
	NSString* _xmlBlob;

}

@property (assign,nonatomic) int justification;                               //@synthesize justification=_justification - In the implementation block
@property (nonatomic,retain) WDCharacterProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSString * xmlBlob;                            //@synthesize xmlBlob=_xmlBlob - In the implementation block
-(WDCharacterProperties *)properties;
-(void)clearProperties;
-(id)description;
-(void)setProperties:(WDCharacterProperties *)arg1 ;
-(int)runType;
-(NSString *)xmlBlob;
-(int)justification;
-(void)setJustification:(int)arg1 ;
-(id)initWithParagraph:(id)arg1 xmlBlob:(id)arg2 ;
@end

