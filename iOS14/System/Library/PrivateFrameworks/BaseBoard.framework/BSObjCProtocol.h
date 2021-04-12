/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSString, Protocol;

@interface BSObjCProtocol : NSObject <NSCopying, BSDescriptionProviding> {

	NSArray* _inheritedProtocols;
	NSString* _name;
	Protocol* _protocol;
	NSArray* _methods;

}

@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) Protocol * protocol;                     //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,copy,readonly) NSArray * inheritedProtocols; 
@property (nonatomic,copy,readonly) NSArray * methods;                         //@synthesize methods=_methods - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protocolForProtocol:(id)arg1 ;
-(id)succinctDescription;
-(NSArray *)methods;
-(id)init;
-(Protocol *)protocol;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSArray *)inheritedProtocols;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(id)flattenWithIgnoredInheritedProtocols:(id)arg1 ;
-(id)inheritedProtocolForProtocol:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)methodForSelector:(SEL)arg1 ;
@end

