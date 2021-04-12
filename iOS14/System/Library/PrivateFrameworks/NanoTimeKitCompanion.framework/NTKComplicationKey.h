/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLKComplicationDescriptor;

@interface NTKComplicationKey : NSObject <NSSecureCoding, NSCopying> {

	NSString* _clientIdentifier;
	NSString* _complicationIdentifier;
	CLKComplicationDescriptor* _descriptor;

}

@property (nonatomic,copy) NSString * clientIdentifier;                         //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * complicationIdentifier;                   //@synthesize complicationIdentifier=_complicationIdentifier - In the implementation block
@property (nonatomic,copy) CLKComplicationDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CLKComplicationDescriptor *)descriptor;
-(void)setDescriptor:(CLKComplicationDescriptor *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)complicationIdentifier;
-(id)initWithClientIdentifier:(id)arg1 descriptor:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 complicationIdentifier:(id)arg2 ;
-(void)setComplicationIdentifier:(NSString *)arg1 ;
@end

