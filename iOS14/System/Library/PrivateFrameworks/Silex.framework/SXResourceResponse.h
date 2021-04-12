/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSString, NSURL, NSError;

@interface SXResourceResponse : NSObject {

	NSString* _resourceIdentifier;
	NSURL* _fileURL;
	NSError* _error;

}

@property (nonatomic,retain) NSString * resourceIdentifier;              //@synthesize resourceIdentifier=_resourceIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSURL *)fileURL;
-(NSString *)resourceIdentifier;
-(void)setResourceIdentifier:(NSString *)arg1 ;
@end

