/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSString;

@interface SSVURLCacheConfiguration : NSObject {

	BOOL _supportsProcessSharing;
	NSString* _sessionIdentifier;

}

@property (nonatomic,copy) NSString * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsProcessSharing;              //@synthesize supportsProcessSharing=_supportsProcessSharing - In the implementation block
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(BOOL)supportsProcessSharing;
-(void)setSupportsProcessSharing:(BOOL)arg1 ;
@end

