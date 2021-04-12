/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary;

@interface RBAttributeTemplate : NSObject <BSDescriptionProviding> {

	NSString* _className;
	NSDictionary* _properties;

}

@property (nonatomic,retain) NSString * className;                   //@synthesize className=_className - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)className;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
@end

