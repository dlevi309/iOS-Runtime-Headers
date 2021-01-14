/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSString;

@interface BSServiceSpecification : NSObject <NSCopying, BSDescriptionProviding> {

	NSDictionary* _options;
	BOOL _derived;
	NSString* _identifier;
	NSDictionary* _configuration;

}

@property (nonatomic,copy,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (getter=isHiddenAtLaunch,nonatomic,readonly) BOOL hiddenAtLaunch; 
@property (getter=isDerived,nonatomic,readonly) BOOL derived;                            //@synthesize derived=_derived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)optionForKey:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isDerived;
-(BOOL)isHiddenAtLaunch;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

