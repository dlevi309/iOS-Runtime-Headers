/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSDictionary, NSString;

@interface SGStringMappingTransformer : NSObject <PMLTransformerProtocol> {

	NSDictionary* _mappings;

}

@property (retain) NSDictionary * mappings;                         //@synthesize mappings=_mappings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withMappings:(id)arg1 ;
-(NSDictionary *)mappings;
-(unsigned long long)hash;
-(void)setMappings:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)withHelperMappingType:(id)arg1 andLanguage:(id)arg2 ;
-(id)initWithMappings:(id)arg1 ;
-(id)initWithHelperMappingType:(id)arg1 andLanguage:(id)arg2 ;
-(BOOL)isEqualToStringMappingTransformer:(id)arg1 ;
@end

