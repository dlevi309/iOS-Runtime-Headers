/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADCharacterProperties;

@interface OADTextRun : NSObject {

	OADCharacterProperties* mProperties;

}
-(unsigned long long)characterCount;
-(id)properties;
-(id)init;
-(id)description;
-(void)setProperties:(id)arg1 ;
-(BOOL)isEmpty;
-(void)removeUnnecessaryOverrides;
-(BOOL)isSimilarToTextRun:(id)arg1 ;
@end

