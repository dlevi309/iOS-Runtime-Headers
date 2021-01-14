/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class NSURL, NSBundle, NSDictionary, NSString;

@interface OKProducerBundle : NSObject {

	NSURL* _url;
	NSBundle* _bundle;
	NSDictionary* _infoDictionary;
	unsigned long long _type;
	NSString* _bundleExtension;

}

@property (nonatomic,retain) NSString * bundleExtension;              //@synthesize bundleExtension=_bundleExtension - In the implementation block
@property (nonatomic,readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
-(id)bundle;
-(id)infoDictionary;
-(id)init;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(id)url;
-(unsigned long long)type;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)identifier;
-(double)version;
-(void)dealloc;
-(id)initWithURL:(id)arg1 bundleType:(unsigned long long)arg2 ;
-(NSString *)bundleExtension;
-(void)setBundleExtension:(NSString *)arg1 ;
@end

