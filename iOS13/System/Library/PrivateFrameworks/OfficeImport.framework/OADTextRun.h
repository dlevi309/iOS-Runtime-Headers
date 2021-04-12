/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADCharacterProperties;

@interface OADTextRun : NSObject {

	OADCharacterProperties* mProperties;

}
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(unsigned long long)characterCount;
-(void)removeUnnecessaryOverrides;
-(BOOL)isSimilarToTextRun:(id)arg1 ;
@end

