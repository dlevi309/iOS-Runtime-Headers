/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSCondition;

@interface OITSUFastReadInvalidatingCache : NSObject {

	/*^block*/id mGenerator;
	A@ mValue;
	Aq mReaderCount;
	A@ mToDispose;
	BOOL mReentrant;
	NSCondition* mCondition;
	BOOL mIsGenerating;

}
-(void)dealloc;
-(void)invalidate;
-(id)value;
-(void)p_setValue:(id)arg1 ;
-(id)initForReentrant:(BOOL)arg1 withGenerator:(/*^block*/id)arg2 ;
@end

