/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface OADProperties : NSObject {

	OADProperties* mParent;
	unsigned mIsMerged : 1;
	unsigned mIsMergedWithParent : 1;

}
+(id)defaultProperties;
-(id)parent;
-(id)init;
-(void)setParent:(id)arg1 ;
-(id)description;
-(void)flatten;
-(unsigned long long)hash;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isMergedPropertyForSelector:(SEL)arg1 ;
-(id)overrideForSelector:(SEL)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(id)possiblyInexistentOverrideForSelector:(SEL)arg1 ;
-(void)changeParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(BOOL)isMerged;
-(BOOL)isMergedWithParent;
-(void)setMerged:(BOOL)arg1 ;
-(void)setMergedWithParent:(BOOL)arg1 ;
-(void)removeUnnecessaryOverrides;
-(id)overrideForSelector:(SEL)arg1 mustExist:(BOOL)arg2 ;
-(void)p_setParent:(id)arg1 ;
@end

