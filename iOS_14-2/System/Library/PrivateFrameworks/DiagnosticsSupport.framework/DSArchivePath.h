/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)prefix;
-(void)setRoot:(BOOL)arg1 ;
-(NSURL *)sourceUrl;
-(void)setSourceUrl:(NSURL *)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(id)initWithSource:(id)arg1 prefix:(id)arg2 root:(BOOL)arg3 ;
@end

