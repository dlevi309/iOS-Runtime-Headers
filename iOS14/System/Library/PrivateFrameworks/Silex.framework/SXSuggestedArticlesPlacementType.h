/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXSuggestedArticlesPlacementType.h>

@protocol SXSuggestedArticlesPlacementType <SXAutoPlacementType>
@property (nonatomic,readonly) unsigned long long theme; 
@required
-(unsigned long long)theme;

@end


@class SXJSONArray, NSString;

@interface SXSuggestedArticlesPlacementType : SXJSONObject <SXSuggestedArticlesPlacementType>

@property (nonatomic,readonly) unsigned long long theme; 
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(SXJSONArray *)conditional;
-(id<SXAutoPlacementLayout>)layout;
-(BOOL)enabled;
-(unsigned long long)theme;
-(NSString *)description;
-(unsigned long long)themeWithValue:(id)arg1 withType:(int)arg2 ;
@end

