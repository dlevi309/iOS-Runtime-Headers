/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDidFinish:(BOOL)arg1 ;
-(void)setErrors:(NSDictionary *)arg1 ;
-(BOOL)didFinish;
@end

