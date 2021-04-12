/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(SGPostalAddressComponents *)components;
-(NSString *)rawAddress;
-(id)initWithAddress:(id)arg1 components:(id)arg2 label:(id)arg3 extractionInfo:(id)arg4 recordId:(id)arg5 ;
-(BOOL)isEqualToPostalAddress:(id)arg1 ;
@end

