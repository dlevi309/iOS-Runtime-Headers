/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OCDDelayedNodeContext;
@interface OCDDelayedNode : NSObject {

	id<OCDDelayedNodeContext> mDelayedContext;
	BOOL mLoaded;

}
-(BOOL)load;
-(void)setLoaded:(BOOL)arg1 ;
-(BOOL)isLoaded;
-(void)setDelayedContext:(id)arg1 ;
-(id)delayedContext;
@end

