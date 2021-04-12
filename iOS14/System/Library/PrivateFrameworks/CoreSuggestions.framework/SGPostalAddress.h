/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGLabeledObject.h>

@class NSString, SGPostalAddressComponents;

@interface SGPostalAddress : SGLabeledObject {

	NSString* _cachedAddress;
	opaque_pthread_mutex_t _cachedAddressLock;
	NSString* _rawAddress;
	SGPostalAddressComponents* _components;

}

@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) NSString * rawAddress;                               //@synthesize rawAddress=_rawAddress - In the implementation block
@property (nonatomic,readonly) SGPostalAddressComponents * components;              //@synthesize components=_components - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionInfo:(id)arg4 recordId:(id)arg5 ;
+(id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 origin:(id)arg6 ;
+(id)postalAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionType:(unsigned long long)arg4 recordId:(id)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SGPostalAddressComponents *)components;
-(id)description;
-(NSString *)address;
-(id)initWithAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionInfo:(id)arg4 recordId:(id)arg5 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)rawAddress;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToPostalAddress:(id)arg1 ;
-(void)dealloc;
@end

