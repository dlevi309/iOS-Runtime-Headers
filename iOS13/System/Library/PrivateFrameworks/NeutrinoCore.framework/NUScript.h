/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSString, NSURL;

@interface NUScript : NSObject {

	NSString* _source;
	NSURL* _url;

}

@property (retain) NSString * source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
-(id)init;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSURL *)url;
-(BOOL)load:(out id*)arg1 ;
-(id)initWithSource:(id)arg1 ;
@end

