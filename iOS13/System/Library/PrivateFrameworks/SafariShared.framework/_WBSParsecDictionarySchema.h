/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSParsecSchema.h>

@class NSDictionary;

@interface _WBSParsecDictionarySchema : WBSParsecSchema {

	NSDictionary* _keysToSchemata;

}

@property (nonatomic,copy) NSDictionary * keysToSchemata;              //@synthesize keysToSchemata=_keysToSchemata - In the implementation block
-(id)initWithSchemaDictionary:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3 ;
-(BOOL)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(NSDictionary *)keysToSchemata;
-(void)setKeysToSchemata:(NSDictionary *)arg1 ;
@end

