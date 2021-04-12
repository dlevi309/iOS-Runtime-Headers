/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

