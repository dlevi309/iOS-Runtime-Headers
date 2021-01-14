/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSString;

@interface SGContactSharingTransformer : NSObject <PMLTransformerProtocol> {

	SCD_Struct_SG35 _rng;
	NSString* _language;
	long long _windowLength;

}

@property (retain) NSString * language;                             //@synthesize language=_language - In the implementation block
@property (assign) long long windowLength;                          //@synthesize windowLength=_windowLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLanguage:(NSString *)arg1 ;
-(long long)windowLength;
-(void)setWindowLength:(long long)arg1 ;
-(unsigned long long)hash;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)initWithLanguage:(id)arg1 windowLength:(long long)arg2 ;
-(BOOL)isEqualToContactSharingTransformer:(id)arg1 ;
@end

