/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

