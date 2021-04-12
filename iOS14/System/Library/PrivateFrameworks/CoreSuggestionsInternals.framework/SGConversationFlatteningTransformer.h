/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@protocol PMLTransformerProtocol;
@class NSObject, NSString;

@interface SGConversationFlatteningTransformer : NSObject <PMLTransformerProtocol> {

	NSObject*<PMLTransformerProtocol> _perMessageTranformer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withPerMessageTransformer:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithPerMessageTransformer:(id)arg1 ;
-(BOOL)isEqualToConversationFlatteningTransformer:(id)arg1 ;
@end

