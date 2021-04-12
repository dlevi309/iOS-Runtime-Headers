/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSDictionary, NSString;

@interface SGStringLabelingTransformer : NSObject <PMLTransformerProtocol> {

	NSDictionary* _labelMapping;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)convertLabelsToMapping:(id)arg1 ;
+(id)withLabelStrings:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithLabelStrings:(id)arg1 ;
-(id)initWithLabelMapping:(id)arg1 ;
-(BOOL)isEqualToStringLabelingTransformer:(id)arg1 ;
@end

