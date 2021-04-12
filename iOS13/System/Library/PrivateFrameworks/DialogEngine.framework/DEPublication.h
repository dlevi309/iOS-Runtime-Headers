/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSDictionary, NSString;

@interface DEPublication : NSObject {

	BOOL _disabled;
	NSDictionary* _distributions;
	NSString* _lastModified;

}

@property (nonatomic,retain) NSDictionary * distributions;              //@synthesize distributions=_distributions - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                   //@synthesize lastModified=_lastModified - In the implementation block
@property (assign,nonatomic) BOOL disabled;                             //@synthesize disabled=_disabled - In the implementation block
+(id)dateToLastModified:(id)arg1 ;
+(BOOL)write:(id)arg1 date:(id)arg2 disabled:(BOOL)arg3 toURL:(id)arg4 keyId:(unsigned long long)arg5 multipart:(BOOL)arg6 ;
-(id)init;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)lastModified;
-(void)setLastModified:(NSString *)arg1 ;
-(id)initWithDistributions:(id)arg1 lastModified:(id)arg2 disabled:(BOOL)arg3 ;
-(NSDictionary *)distributions;
-(void)setDistributions:(NSDictionary *)arg1 ;
@end

