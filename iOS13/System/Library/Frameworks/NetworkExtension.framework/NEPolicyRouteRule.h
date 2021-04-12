/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(long long)action;
-(id)typeString;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setAction:(long long)arg1 ;
-(BOOL)validate;
-(id)initInternal;
-(id)actionString;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(unsigned char)actionValue;
-(unsigned char)typeValue;
@end

