/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)cancelTask;
-(id)description;
-(NSString *)taskIdentifier;
-(BOOL)isCancelled;
-(NSArray *)scopeIdentifiers;
-(id)initWithScopeIdentifiers:(id)arg1 ;
-(void)launchTask;
@end

