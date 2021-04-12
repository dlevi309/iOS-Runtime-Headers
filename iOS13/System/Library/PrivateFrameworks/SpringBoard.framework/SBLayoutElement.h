/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)uniqueIdentifier;
-(long long)layoutRole;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)layoutAttributes;
-(Class)viewControllerClass;
-(id)workspaceEntity;
-(BOOL)supportsLayoutRole:(long long)arg1 ;
-(BOOL)hasLayoutAttributes:(unsigned long long)arg1 ;
-(unsigned long long)supportedLayoutRoles;
-(id)entityGenerator;
-(id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2 supportedLayoutRoles:(unsigned long long)arg3 layoutAttributes:(unsigned long long)arg4 viewControllerClass:(Class)arg5 entityGenerator:(/*^block*/id)arg6 ;
-(void)setEntityGenerator:(id)arg1 ;
@end

