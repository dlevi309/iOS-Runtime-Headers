/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface AFMyriadAdvertisementContext : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _generation;
	NSData* _contextData;
	double _contextFetchDelay;

}

@property (nonatomic,readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy,readonly) NSData * contextData;                  //@synthesize contextData=_contextData - In the implementation block
@property (nonatomic,readonly) double contextFetchDelay;                   //@synthesize contextFetchDelay=_contextFetchDelay - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(unsigned long long)generation;
-(NSData *)contextData;
-(void)encodeWithCoder:(id)arg1 ;
-(double)contextFetchDelay;
-(id)initWithGeneration:(unsigned long long)arg1 contextData:(id)arg2 contextFetchDelay:(double)arg3 ;
-(id)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

