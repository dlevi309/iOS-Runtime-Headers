/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface DKDiagnosticParameters : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _predicates;
	NSDictionary* _specifications;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) NSDictionary * predicates;                  //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,readonly) NSDictionary * specifications;              //@synthesize specifications=_specifications - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                  //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)diagnosticParametersWithDictionary:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)predicates;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_decoderClasses;
-(NSDictionary *)specifications;
@end

