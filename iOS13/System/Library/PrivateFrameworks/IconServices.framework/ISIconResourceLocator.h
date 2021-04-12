/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDictionary;

@interface ISIconResourceLocator : NSObject <NSSecureCoding> {

	NSURL* _resourceDirectoryURL;
	NSString* _bundleIdentifier;
	NSDictionary* _iconsDictionary;
	NSString* _preferedResourceName;

}

@property (retain) NSURL * resourceDirectoryURL;               //@synthesize resourceDirectoryURL=_resourceDirectoryURL - In the implementation block
@property (copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSDictionary * iconsDictionary;               //@synthesize iconsDictionary=_iconsDictionary - In the implementation block
@property (copy) NSString * preferedResourceName;              //@synthesize preferedResourceName=_preferedResourceName - In the implementation block
@property (readonly) BOOL allowLocalizedIcon; 
+(BOOL)supportsSecureCoding;
+(id)resourceLocatorWithLSIconResourceLocator:(id)arg1 ;
+(id)resourceLocatorWithType:(id)arg1 ;
+(id)genericIconrResourceLocator;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDictionary *)iconsDictionary;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setIconsDictionary:(NSDictionary *)arg1 ;
-(BOOL)allowLocalizedIcon;
-(NSString *)preferedResourceName;
-(void)setPreferedResourceName:(NSString *)arg1 ;
-(void)setResourceDirectoryURL:(NSURL *)arg1 ;
-(NSURL *)resourceDirectoryURL;
@end

