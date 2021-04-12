/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSString;

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription> {

	long long _action;
	NSString* _interfaceName;
	long long _type;

}

@property (assign) long long action;                    //@synthesize action=_action - In the implementation block
@property (copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) long long type;                      //@synthesize type=_type - In the implementation block
+(id)routeRuleWithAction:(long long)arg1 forInterfaceName:(id)arg2 ;
+(id)routeRuleWithAction:(long long)arg1 forType:(long long)arg2 ;
-(id)typeString;
-(id)initInternal;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)validate;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(id)init;
-(unsigned char)typeValue;
-(id)actionString;
-(unsigned char)actionValue;
-(long long)action;
-(void)setType:(long long)arg1 ;
-(void)setAction:(long long)arg1 ;
-(NSString *)interfaceName;
-(id)description;
-(long long)type;
-(void)setInterfaceName:(NSString *)arg1 ;
@end

