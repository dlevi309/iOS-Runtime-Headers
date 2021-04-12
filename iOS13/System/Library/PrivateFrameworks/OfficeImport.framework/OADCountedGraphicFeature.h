/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface OADCountedGraphicFeature : NSObject {

	id mFeature;
	unsigned long long mUsageCount;

}

@property (assign,nonatomic) unsigned long long usageCount; 
-(void)dealloc;
-(id)feature;
-(id)initWithFeature:(id)arg1 ;
-(unsigned long long)usageCount;
-(void)setUsageCount:(unsigned long long)arg1 ;
-(void)incrementUsageCount;
-(long long)compareUsageCount:(id)arg1 ;
@end

