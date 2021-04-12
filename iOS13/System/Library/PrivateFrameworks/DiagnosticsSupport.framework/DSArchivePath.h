/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


@class NSURL, NSString;

@interface DSArchivePath : NSObject {

	BOOL _root;
	NSURL* _sourceUrl;
	NSString* _prefix;

}

@property (nonatomic,retain) NSURL * sourceUrl;              //@synthesize sourceUrl=_sourceUrl - In the implementation block
@property (nonatomic,retain) NSString * prefix;              //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) BOOL root;                      //@synthesize root=_root - In the implementation block
+(id)archivePathWithSource:(id)arg1 prefix:(id)arg2 root:(BOOL)arg3 ;
-(BOOL)root;
-(void)setRoot:(BOOL)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSURL *)sourceUrl;
-(void)setSourceUrl:(NSURL *)arg1 ;
-(id)initWithSource:(id)arg1 prefix:(id)arg2 root:(BOOL)arg3 ;
@end

