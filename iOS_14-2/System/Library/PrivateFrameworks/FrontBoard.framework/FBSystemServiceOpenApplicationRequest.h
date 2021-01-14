/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setClientProcess:(FBProcess *)arg1 ;
-(NSString *)bundleIdentifier;
-(FBSOpenApplicationOptions *)options;
-(void)setOptions:(FBSOpenApplicationOptions *)arg1 ;
-(BOOL)isTrusted;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setTrusted:(BOOL)arg1 ;
-(FBProcess *)clientProcess;
@end

