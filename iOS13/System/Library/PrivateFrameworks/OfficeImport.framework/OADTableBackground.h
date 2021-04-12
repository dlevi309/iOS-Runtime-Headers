/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/OADEffectsParent.h>

@class OADFill, NSArray, NSString;

@interface OADTableBackground : NSObject <OADEffectsParent> {

	OADFill* mFill;
	NSArray* mEffects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)fill;
-(BOOL)hasEffects;
-(void)setFill:(id)arg1 ;
-(id)effects;
-(void)setEffects:(id)arg1 ;
@end

