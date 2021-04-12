/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(id)identifier;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(id)infoDictionary;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(double)version;
-(id)url;
-(id)bundle;
-(id)initWithURL:(id)arg1 bundleType:(unsigned long long)arg2 ;
-(NSString *)bundleExtension;
-(void)setBundleExtension:(NSString *)arg1 ;
@end

