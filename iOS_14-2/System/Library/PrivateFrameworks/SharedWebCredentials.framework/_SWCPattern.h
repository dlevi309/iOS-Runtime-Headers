/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>

@class NSString;

@interface _SWCPattern : NSObject <SWCRedactedDescription> {

	BOOL _freeWhenDone;
	const SWCPatternStorage* _storage;

}

@property (assign,nonatomic) const SWCPatternStorage* storage;                 //@synthesize storage=_storage - In the implementation block
@property (getter=isBlocking,readonly) BOOL blocking; 
@property (getter=isCaseSensitive,readonly) BOOL caseSensitive; 
@property (getter=isPercentEncoded,readonly) BOOL percentEncoded; 
@property (readonly) NSString * requiredEntitlement; 
+(id)new;
+(id)_debug:(BOOL)arg1 descriptionOfStorage:(const SWCPatternStorage*)arg2 forObject:(id)arg3 redacted:(BOOL)arg4 ;
+(id)_normalizedURLPath:(id)arg1 ;
-(NSString *)requiredEntitlement;
-(void)setStorage:(const SWCPatternStorage*)arg1 ;
-(id)init;
-(const SWCPatternStorage*)storage;
-(id)debugDescription;
-(id)_initWithPatternStorageNoCopy:(const SWCPatternStorage*)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithDictionary:(id)arg1 defaults:(id)arg2 ;
-(id)initWithPathPattern:(id)arg1 defaults:(id)arg2 ;
-(BOOL)isCaseSensitive;
-(BOOL)isPercentEncoded;
-(unsigned long long)evaluateWithURLComponents:(id)arg1 substitutionVariables:(id)arg2 auditToken:(const SCD_Struct_SW0*)arg3 ;
-(id)description;
-(BOOL)isBlocking;
-(unsigned long long)hash;
-(id)redactedDescription;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

