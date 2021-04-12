/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(WDCharacterProperties *)properties;
-(void)setProperties:(WDCharacterProperties *)arg1 ;
-(void)clearProperties;
-(int)runType;
-(int)justification;
-(void)setJustification:(int)arg1 ;
-(id)initWithParagraph:(id)arg1 xmlBlob:(id)arg2 ;
-(NSString *)xmlBlob;
@end

