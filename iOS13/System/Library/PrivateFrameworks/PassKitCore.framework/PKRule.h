/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSPredicate, PKOSVersionRequirementRange;

@interface PKRule : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSPredicate* _predicate;
	PKOSVersionRequirementRange* _osVersionRequirementRange;
	NSString* _predicateFormat;

}

@property (nonatomic,retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * predicateFormat;                                           //@synthesize predicateFormat=_predicateFormat - In the implementation block
@property (nonatomic,retain) PKOSVersionRequirementRange * osVersionRequirementRange;              //@synthesize osVersionRequirementRange=_osVersionRequirementRange - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;                                            //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSPredicate *)predicate;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)predicateFormat;
-(id)initWithIdentifier:(id)arg1 predicateFormat:(id)arg2 osVersionRequirementRange:(id)arg3 ;
-(void)parsePredicateFormat;
-(PKOSVersionRequirementRange *)osVersionRequirementRange;
-(void)setOsVersionRequirementRange:(PKOSVersionRequirementRange *)arg1 ;
-(void)setPredicateFormat:(NSString *)arg1 ;
@end

