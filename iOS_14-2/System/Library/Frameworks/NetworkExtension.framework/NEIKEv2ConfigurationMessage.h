/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NEIKEv2ConfigurationMessage : NSObject <NSCopying> {

	unsigned long long _configurationType;
	NSArray* _attributes;

}

@property (assign) unsigned long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
@property (retain) NSArray * attributes;                              //@synthesize attributes=_attributes - In the implementation block
+(id)copyConfigurationForRequest:(id)arg1 reply:(id)arg2 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setAttributes:(NSArray *)arg1 ;
-(unsigned long long)configurationType;
-(void)setConfigurationType:(unsigned long long)arg1 ;
-(id)initWithWithAttributes:(id)arg1 ;
-(NSArray *)attributes;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

