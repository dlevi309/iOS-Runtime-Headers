/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@class NSCondition;

@interface TSUFastReadInvalidatingCache : NSObject {

	/*^block*/id mGenerator;
	A@ mValue;
	Aq mReaderCount;
	A@ mToDispose;
	BOOL mReentrant;
	NSCondition* mCondition;
	BOOL mIsGenerating;

}
-(void)invalidate;
-(id)value;
-(void)dealloc;
-(void)p_setValue:(id)arg1 ;
-(id)initForReentrant:(BOOL)arg1 withGenerator:(/*^block*/id)arg2 ;
@end

