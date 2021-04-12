/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@class NSString, NSArray;

@interface BSPluginSpecification : NSObject {

	NSString* _type;
	NSArray* _whitelistedNames;
	NSString* _classOrProtocolName;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy,readonly) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * requiredClassOrProtocolName;              //@synthesize classOrProtocolName=_classOrProtocolName - In the implementation block
+(id)specificationsFromHostBundle:(id)arg1 ;
-(id)description;
-(NSString *)type;
-(BOOL)isValid;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)matchesPluginBundle:(id)arg1 ;
-(NSString *)requiredClassOrProtocolName;
-(id)initWithPlistSpecification:(id)arg1 ;
@end

