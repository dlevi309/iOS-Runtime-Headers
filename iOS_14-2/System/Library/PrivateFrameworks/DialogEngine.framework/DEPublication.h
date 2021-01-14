/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSDictionary, NSString;

@interface DEPublication : NSObject {

	BOOL _disabled;
	NSDictionary* _distributions;
	NSString* _tag;
	NSString* _lastModified;

}

@property (nonatomic,retain) NSDictionary * distributions;              //@synthesize distributions=_distributions - In the implementation block
@property (nonatomic,retain) NSString * tag;                            //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                   //@synthesize lastModified=_lastModified - In the implementation block
@property (assign,nonatomic) BOOL disabled;                             //@synthesize disabled=_disabled - In the implementation block
+(id)dateToLastModified:(id)arg1 ;
+(BOOL)write:(id)arg1 tag:(id)arg2 date:(id)arg3 disabled:(BOOL)arg4 toURL:(id)arg5 keyId:(unsigned long long)arg6 privateKey:(id)arg7 ;
-(void)setLastModified:(NSString *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(id)init;
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(NSString *)lastModified;
-(NSDictionary *)distributions;
-(id)initWithDistributions:(id)arg1 tag:(id)arg2 lastModified:(id)arg3 disabled:(BOOL)arg4 ;
-(id)getPublicationId;
-(void)setDistributions:(NSDictionary *)arg1 ;
-(BOOL)disabled;
@end

