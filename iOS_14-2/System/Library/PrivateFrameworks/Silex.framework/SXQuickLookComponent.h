/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>
#import <libobjc.A.dylib/SXQuickLookComponent.h>
@class SXFormattedText, NSString;


@protocol SXQuickLookComponent <SXComponent>
@property (nonatomic,readonly) SXFormattedText * caption; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) NSString * fileExtension; 
@required
-(SXFormattedText *)caption;
-(NSString *)fileExtension;
-(NSString *)resourceIdentifier;

@end


@class SXFormattedText, NSString, SXComponentConditions, SXJSONDictionary, SXComponentClassification, SXJSONArray, SXComponentAnimation;

@interface SXQuickLookComponent : SXComponent <SXQuickLookComponent>

@property (nonatomic,readonly) SXFormattedText * caption; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) NSString * fileExtension; 
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
+(id)typeString;
-(NSString *)fileExtension;
-(NSString *)resourceIdentifier;
-(SXFormattedText *)caption;
-(id)captionWithValue:(id)arg1 withType:(int)arg2 ;
@end

