/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

@interface WDRunWithCharacterProperties : WDRun {

	WDCharacterProperties* mProperties;

}

@property (retain) WDCharacterProperties * properties; 
@property (getter=isHidden,readonly) BOOL hidden; 
-(BOOL)isHidden;
-(WDCharacterProperties *)properties;
-(void)setProperties:(WDCharacterProperties *)arg1 ;
-(void)clearProperties;
-(id)initWithParagraph:(id)arg1 ;
@end

