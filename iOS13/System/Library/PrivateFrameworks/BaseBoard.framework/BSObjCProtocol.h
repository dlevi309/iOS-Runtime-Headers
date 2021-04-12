/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, Protocol, NSArray;

@interface BSObjCProtocol : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _name;
	Protocol* _protocol;
	NSArray* _inheritedProtocols;
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
+(id)_gatherAdoptedProtocolsForProtocol:(id)arg1 ;
+(id)_gatherMethodMetadataForProtocol:(id)arg1 ;
+(id)protocolForProtocol:(id)arg1 ;
+(id)_gatherMethodMetadataForProtocol:(id)arg1 required:(BOOL)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodForSelector:(SEL)arg1 ;
-(Protocol *)protocol;
-(NSArray *)methods;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithName:(id)arg1 protocol:(id)arg2 inherited:(id)arg3 methods:(id)arg4 ;
-(id)_unionMethodsIgnoringObjCProtocols:(id)arg1 ;
-(NSArray *)inheritedProtocols;
-(id)inheritedProtocolForProtocol:(id)arg1 ;
-(id)flattenWithIgnoredInheritedProtocols:(id)arg1 ;
@end

