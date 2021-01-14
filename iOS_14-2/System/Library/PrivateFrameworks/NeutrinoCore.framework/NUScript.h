/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSString, NSURL;

@interface NUScript : NSObject {

	NSString* _source;
	NSURL* _url;

}

@property (retain) NSString * source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
-(BOOL)load:(out id*)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)setSource:(NSString *)arg1 ;
-(id)description;
-(NSString *)source;
@end

