/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

@interface WDRunWithCharacterProperties : WDRun {

	WDCharacterProperties* mProperties;

}

@property (retain) WDCharacterProperties * properties; 
@property (getter=isHidden,readonly) BOOL hidden; 
-(WDCharacterProperties *)properties;
-(BOOL)isHidden;
-(void)clearProperties;
-(void)setProperties:(WDCharacterProperties *)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
@end

