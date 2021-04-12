/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(unsigned long long)configurationType;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setConfigurationType:(unsigned long long)arg1 ;
-(id)initWithWithAttributes:(id)arg1 ;
@end

