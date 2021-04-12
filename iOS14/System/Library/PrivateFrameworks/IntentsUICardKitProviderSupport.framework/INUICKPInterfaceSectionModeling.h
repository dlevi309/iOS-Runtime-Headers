/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
*/

@class NSSet;


@protocol INUICKPInterfaceSectionModeling <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long interactiveBehavior; 
@property (nonatomic,copy) NSSet * parameters; 
@property (nonatomic,readonly) BOOL isWildCardSection; 
@required
-(NSSet *)parameters;
-(void)setParameters:(id)arg1;
-(unsigned long long)interactiveBehavior;
-(BOOL)isWildCardSection;

@end

