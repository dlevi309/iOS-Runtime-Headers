/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSString;

@interface SGEntityMatchingTransformer : NSObject <PMLTransformerProtocol> {

	NSString* _targetMapping;
	NSString* _phoneMapping;
	NSString* _emailMapping;
	NSString* _addressMapping;
	NSString* _dateMapping;

}

@property (retain) NSString * targetMapping;                        //@synthesize targetMapping=_targetMapping - In the implementation block
@property (retain) NSString * phoneMapping;                         //@synthesize phoneMapping=_phoneMapping - In the implementation block
@property (retain) NSString * emailMapping;                         //@synthesize emailMapping=_emailMapping - In the implementation block
@property (retain) NSString * addressMapping;                       //@synthesize addressMapping=_addressMapping - In the implementation block
@property (retain) NSString * dateMapping;                          //@synthesize dateMapping=_dateMapping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withTargetMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 addressMapping:(id)arg4 andDateMapping:(id)arg5 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(NSString *)emailMapping;
-(void)setEmailMapping:(NSString *)arg1 ;
-(id)initWithTargetMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 addressMapping:(id)arg4 andDateMapping:(id)arg5 ;
-(id)extendMatchArray:(id)arg1 withTarget:(id)arg2 ;
-(BOOL)isEqualToEntityMatchingTransformer:(id)arg1 ;
-(NSString *)targetMapping;
-(void)setTargetMapping:(NSString *)arg1 ;
-(NSString *)phoneMapping;
-(void)setPhoneMapping:(NSString *)arg1 ;
-(NSString *)addressMapping;
-(void)setAddressMapping:(NSString *)arg1 ;
-(NSString *)dateMapping;
-(void)setDateMapping:(NSString *)arg1 ;
@end

