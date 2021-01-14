/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTTreatmentAction.h>

@class NSString, NSDictionary;

@interface MTURLDeresAction : MTTreatmentAction {

	NSString* _scope;
	NSDictionary* _allowedParams;

}

@property (nonatomic,retain) NSString * scope;                          //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSDictionary * allowedParams;              //@synthesize allowedParams=_allowedParams - In the implementation block
-(void)setScope:(NSString *)arg1 ;
-(NSString *)scope;
-(id)initWithField:(id)arg1 configDictionary:(id)arg2 ;
-(id)performAction:(id)arg1 context:(id)arg2 ;
-(void)setAllowedParams:(NSDictionary *)arg1 ;
-(id)allowedQueryItemsFromItems:(id)arg1 ;
-(NSDictionary *)allowedParams;
@end

