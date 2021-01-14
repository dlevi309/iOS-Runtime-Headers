/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSString;

@interface SGTokenJoiningTransformer : NSObject <PMLTransformerProtocol> {

	NSString* _separator;

}

@property (retain) NSString * separator;                            //@synthesize separator=_separator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withSeparator:(id)arg1 ;
-(NSString *)separator;
-(unsigned long long)hash;
-(void)setSeparator:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithSeparator:(id)arg1 ;
-(BOOL)isEqualToSGTokenJoiningTransformer:(id)arg1 ;
@end

