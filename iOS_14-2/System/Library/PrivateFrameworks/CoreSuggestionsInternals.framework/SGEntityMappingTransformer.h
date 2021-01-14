/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSDataDetector, NSString;

@interface SGEntityMappingTransformer : NSObject <PMLTransformerProtocol> {

	NSDataDetector* _dataDetector;
	NSString* _emailMapping;
	NSString* _linkMapping;

}

@property (retain) NSDataDetector * dataDetector;                   //@synthesize dataDetector=_dataDetector - In the implementation block
@property (retain) NSString * emailMapping;                         //@synthesize emailMapping=_emailMapping - In the implementation block
@property (retain) NSString * linkMapping;                          //@synthesize linkMapping=_linkMapping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withEmailMapping:(id)arg1 linkMapping:(id)arg2 ;
-(unsigned long long)hash;
-(void)setDataDetector:(NSDataDetector *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDataDetector *)dataDetector;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithEmailMapping:(id)arg1 linkMapping:(id)arg2 ;
-(BOOL)isEqualToEntityMappingTransformer:(id)arg1 ;
-(NSString *)emailMapping;
-(void)setEmailMapping:(NSString *)arg1 ;
-(NSString *)linkMapping;
-(void)setLinkMapping:(NSString *)arg1 ;
@end

