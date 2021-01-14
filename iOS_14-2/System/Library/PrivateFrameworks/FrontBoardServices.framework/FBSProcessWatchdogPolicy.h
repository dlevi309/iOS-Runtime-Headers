/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBSProcessWatchdogPolicy : NSObject <BSDescriptionProviding, NSCopying> {

	NSString* _name;
	NSArray* _provisions;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * provisions;                    //@synthesize provisions=_provisions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyWithProvisions:(id)arg1 ;
+(id)policyWithName:(id)arg1 forProvisions:(id)arg2 ;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(NSArray *)provisions;
-(void)setProvisions:(NSArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

