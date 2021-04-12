/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSDictionary;

@interface CPLProxyLibraryManagerSyncOutstandingInvocation : NSObject {

	BOOL _didFinish;
	NSDictionary* _errors;

}

@property (nonatomic,retain) NSDictionary * errors;              //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) BOOL didFinish;                     //@synthesize didFinish=_didFinish - In the implementation block
-(id)description;
-(NSDictionary *)errors;
-(void)setErrors:(NSDictionary *)arg1 ;
-(BOOL)didFinish;
-(void)setDidFinish:(BOOL)arg1 ;
@end

