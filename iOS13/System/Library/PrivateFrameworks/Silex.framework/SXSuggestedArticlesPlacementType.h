/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXSuggestedArticlesPlacementType.h>

@protocol SXSuggestedArticlesPlacementType <SXAutoPlacementType>
@property (nonatomic,readonly) unsigned long long theme; 
@required
-(unsigned long long)theme;

@end


@class NSString, SXJSONArray;

@interface SXSuggestedArticlesPlacementType : SXJSONObject <SXSuggestedArticlesPlacementType>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout; 
@property (nonatomic,readonly) unsigned long long theme; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(unsigned long long)theme;
-(id<SXAutoPlacementLayout>)layout;
-(BOOL)enabled;
-(SXJSONArray *)conditional;
-(NSString *)description;
-(unsigned long long)themeWithValue:(id)arg1 withType:(int)arg2 ;
@end

