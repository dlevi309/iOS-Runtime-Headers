/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


@class NSString, FBSOpenApplicationOptions, FBProcess;

@interface FBSystemServiceOpenApplicationRequest : NSObject {

	NSString* _bundleIdentifier;
	FBSOpenApplicationOptions* _options;
	FBProcess* _clientProcess;
	BOOL _trusted;

}

@property (assign,getter=isTrusted,nonatomic) BOOL trusted;                  //@synthesize trusted=_trusted - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) FBSOpenApplicationOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) FBProcess * clientProcess;                      //@synthesize clientProcess=_clientProcess - In the implementation block
+(id)request;
-(id)description;
-(FBSOpenApplicationOptions *)options;
-(NSString *)bundleIdentifier;
-(void)setOptions:(FBSOpenApplicationOptions *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(FBProcess *)clientProcess;
-(void)setTrusted:(BOOL)arg1 ;
-(void)setClientProcess:(FBProcess *)arg1 ;
-(BOOL)isTrusted;
@end

