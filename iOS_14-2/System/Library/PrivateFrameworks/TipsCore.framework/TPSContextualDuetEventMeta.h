/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSString, NSNumber;

@interface TPSContextualDuetEventMeta : TPSSerializableObject {

	NSString* _context;
	NSString* _domain;
	NSString* _intentVerb;
	NSString* _intentClass;
	NSNumber* _intentDirection;
	NSNumber* _donatedBySiri;

}

@property (nonatomic,copy) NSString * domain;                       //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * intentVerb;                   //@synthesize intentVerb=_intentVerb - In the implementation block
@property (nonatomic,copy) NSString * intentClass;                  //@synthesize intentClass=_intentClass - In the implementation block
@property (nonatomic,copy) NSNumber * intentDirection;              //@synthesize intentDirection=_intentDirection - In the implementation block
@property (nonatomic,copy) NSNumber * donatedBySiri;                //@synthesize donatedBySiri=_donatedBySiri - In the implementation block
@property (nonatomic,copy) NSString * context;                      //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(NSString *)intentVerb;
-(void)setIntentVerb:(NSString *)arg1 ;
-(void)setIntentClass:(NSString *)arg1 ;
-(void)setIntentDirection:(NSNumber *)arg1 ;
-(void)setDonatedBySiri:(NSNumber *)arg1 ;
-(NSNumber *)intentDirection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)context;
-(NSString *)domain;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)intentClass;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)donatedBySiri;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContext:(NSString *)arg1 ;
@end

