/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSString, NSCharacterSet;

@interface SGSymbolicMappingTransformer : NSObject <PMLTransformerProtocol> {

	NSString* _numericMapping;
	NSString* _characterMapping;
	NSCharacterSet* _characterSet;

}

@property (retain) NSString * numericMapping;                       //@synthesize numericMapping=_numericMapping - In the implementation block
@property (retain) NSString * characterMapping;                     //@synthesize characterMapping=_characterMapping - In the implementation block
@property (retain) NSCharacterSet * characterSet;                   //@synthesize characterSet=_characterSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2 ;
-(NSCharacterSet *)characterSet;
-(void)setCharacterSet:(NSCharacterSet *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2 ;
-(BOOL)isEqualToSymbolicMappingTransformer:(id)arg1 ;
-(NSString *)numericMapping;
-(void)setNumericMapping:(NSString *)arg1 ;
-(NSString *)characterMapping;
-(void)setCharacterMapping:(NSString *)arg1 ;
@end

