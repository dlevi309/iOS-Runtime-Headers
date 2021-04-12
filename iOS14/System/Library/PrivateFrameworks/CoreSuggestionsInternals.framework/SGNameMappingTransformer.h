/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSDictionary, NSString;

@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol> {

	BOOL _forNameDetector;
	NSDictionary* _nameMappings;
	NSString* _tokenToIgnore;
	int _minimumConfidence;
	/*^block*/id _confidenceMapper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceForNameDetector;
+(id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4 ;
+(id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 minimumConfidence:(int)arg4 confidenceMapper:(/*^block*/id)arg5 tokenToIgnore:(id)arg6 andPossessive:(id)arg7 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithNameMappings:(id)arg1 minimumConfidence:(int)arg2 confidenceMapper:(/*^block*/id)arg3 tokenToIgnore:(id)arg4 forNameDetector:(BOOL)arg5 ;
-(id)nameMappingForToken:(id)arg1 withConfidence:(int*)arg2 ;
-(BOOL)isPossessive:(id)arg1 ;
-(BOOL)isEqualToNameMappingTransformer:(id)arg1 ;
@end

