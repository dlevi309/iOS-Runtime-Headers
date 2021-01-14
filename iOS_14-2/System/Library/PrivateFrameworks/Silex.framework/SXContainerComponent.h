/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>

@class SXJSONArray;

@interface SXContainerComponent : SXComponent

@property (nonatomic,readonly) SXJSONArray * allComponents; 
@property (nonatomic,readonly) SXJSONArray * components; 
@property (nonatomic,readonly) id<SXContentDisplay> contentDisplay; 
+(id)typeString;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
+(/*^block*/id)objectValueClassBlockForPropertyWithName:(id)arg1 ;
+(/*^block*/id)purgeClassBlockForPropertyWithName:(id)arg1 ;
-(id<SXContentDisplay>)contentDisplay;
-(SXJSONArray *)components;
-(SXJSONArray *)allComponents;
@end

