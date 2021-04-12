/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface OADCountedGraphicFeature : NSObject {

	id mFeature;
	unsigned long long mUsageCount;

}

@property (assign,nonatomic) unsigned long long usageCount; 
-(id)feature;
-(id)initWithFeature:(id)arg1 ;
-(unsigned long long)usageCount;
-(void)setUsageCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)incrementUsageCount;
-(long long)compareUsageCount:(id)arg1 ;
@end

