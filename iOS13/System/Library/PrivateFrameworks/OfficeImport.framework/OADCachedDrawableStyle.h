/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface OADCachedDrawableStyle : NSObject {

	int mFillCategory;
	unsigned long long mFillIndex;
	unsigned long long mStrokeIndex;
	unsigned long long mShadowIndex;
	unsigned char mReflectionOpacity;
	unsigned long long mTextStyleIndex;

}

@property (nonatomic,readonly) int fillCategory; 
@property (nonatomic,readonly) unsigned long long fillIndex; 
@property (nonatomic,readonly) unsigned long long strokeIndex; 
@property (nonatomic,readonly) unsigned long long shadowIndex; 
@property (nonatomic,readonly) unsigned char reflectionOpacity; 
@property (nonatomic,readonly) unsigned long long textStyleIndex; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)strokeIndex;
-(id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned long long)arg2 strokeIndex:(unsigned long long)arg3 shadowIndex:(unsigned long long)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned long long)arg6 ;
-(int)fillCategory;
-(unsigned long long)fillIndex;
-(unsigned long long)shadowIndex;
-(unsigned char)reflectionOpacity;
-(unsigned long long)textStyleIndex;
@end

