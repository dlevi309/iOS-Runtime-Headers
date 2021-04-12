/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSArray, NSString;

@interface CPLForceSyncTask : NSObject {

	BOOL _cancelled;
	NSArray* _scopeIdentifiers;
	NSString* _taskIdentifier;

}

@property (nonatomic,copy) NSString * taskIdentifier;                          //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scopeIdentifiers;                //@synthesize scopeIdentifiers=_scopeIdentifiers - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(id)description;
-(BOOL)isCancelled;
-(void)launch;
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)cancelTask;
-(NSArray *)scopeIdentifiers;
-(id)initWithScopeIdentifiers:(id)arg1 ;
@end

