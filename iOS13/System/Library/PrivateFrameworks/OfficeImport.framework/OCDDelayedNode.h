/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OCDDelayedNodeContext;
@interface OCDDelayedNode : NSObject {

	id<OCDDelayedNodeContext> mDelayedContext;
	BOOL mLoaded;

}
-(BOOL)load;
-(BOOL)isLoaded;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setDelayedContext:(id)arg1 ;
-(id)delayedContext;
@end

