/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithLabelStrings:(id)arg1 ;
-(id)initWithLabelMapping:(id)arg1 ;
-(BOOL)isEqualToStringLabelingTransformer:(id)arg1 ;
@end

