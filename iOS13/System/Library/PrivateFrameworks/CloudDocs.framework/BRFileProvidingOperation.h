/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRFileProvidingOperation : BROperation {

	NSURL* _url;
	unsigned long long _readingOptions;
	/*^block*/id _fileProvidingCompletion;
	BOOL _wantsCurrentVersion;

}

@property (assign,nonatomic) BOOL wantsCurrentVersion;              //@synthesize wantsCurrentVersion=_wantsCurrentVersion - In the implementation block
@property (nonatomic,copy) id fileProvidingCompletion;              //@synthesize fileProvidingCompletion=_fileProvidingCompletion - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)fileProvidingCompletion;
-(void)setFileProvidingCompletion:(id)arg1 ;
-(id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2 ;
-(BOOL)wantsCurrentVersion;
-(void)setWantsCurrentVersion:(BOOL)arg1 ;
@end

