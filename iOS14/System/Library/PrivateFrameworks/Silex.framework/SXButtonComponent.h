/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>
#import <libobjc.A.dylib/SXButtonComponent.h>
@class NSString;


@protocol SXButtonComponent <SXComponent,SXConditionalButtonComponentProperties>
@property (nonatomic,readonly) NSString * text; 
@required
-(NSString *)text;

@end


@class NSString, SXComponentConditions, SXJSONDictionary, SXComponentClassification, SXJSONArray, SXComponentAnimation;

@interface SXButtonComponent : SXComponent <SXButtonComponent>

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentConditions * conditions; 
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) SXJSONDictionary * analytics; 
@property (nonatomic,readonly) SXComponentClassification * classification; 
@property (nonatomic,readonly) SXJSONArray * additions; 
@property (nonatomic,readonly) NSString * layout; 
@property (nonatomic,readonly) NSString * style; 
@property (nonatomic,readonly) id<SXComponentAnchor> anchor; 
@property (nonatomic,readonly) SXJSONArray * behaviors; 
@property (nonatomic,readonly) SXComponentAnimation * animation; 
@property (nonatomic,readonly) BOOL hidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) id<SXAction> action; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(id<SXAction>)action;
-(NSString *)textStyle;
-(NSString *)text;
@end

