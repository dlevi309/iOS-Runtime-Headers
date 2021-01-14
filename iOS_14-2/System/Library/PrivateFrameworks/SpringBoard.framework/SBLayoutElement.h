/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBLayoutElementDescriptor.h>
#import <libobjc.A.dylib/SBWorkspaceEntityGenerating.h>

@class NSString;

@interface SBLayoutElement : NSObject <BSDescriptionProviding, SBLayoutElementDescriptor, SBWorkspaceEntityGenerating> {

	NSString* _uniqueIdentifier;
	long long _layoutRole;
	unsigned long long _supportedLayoutRoles;
	unsigned long long _layoutAttributes;
	Class _viewControllerClass;
	/*^block*/id _entityGenerator;

}

@property (nonatomic,copy) id entityGenerator;                                       //@synthesize entityGenerator=_entityGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) long long layoutRole; 
@property (nonatomic,readonly) unsigned long long supportedLayoutRoles; 
@property (nonatomic,readonly) unsigned long long layoutAttributes; 
@property (nonatomic,readonly) Class viewControllerClass; 
+(id)elementWithDescriptor:(id)arg1 ;
+(id)elementWithDescriptor:(id)arg1 layoutRole:(long long)arg2 ;
-(id)succinctDescription;
-(long long)layoutRole;
-(unsigned long long)layoutAttributes;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(Class)viewControllerClass;
-(id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2 supportedLayoutRoles:(unsigned long long)arg3 layoutAttributes:(unsigned long long)arg4 viewControllerClass:(Class)arg5 entityGenerator:(/*^block*/id)arg6 ;
-(void)setEntityGenerator:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(unsigned long long)supportedLayoutRoles;
-(id)entityGenerator;
-(NSString *)description;
-(BOOL)hasLayoutAttributes:(unsigned long long)arg1 ;
-(id)workspaceEntity;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)supportsLayoutRole:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

