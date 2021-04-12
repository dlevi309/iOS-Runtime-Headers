/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString, NSURL;

@interface UISystemNavigationActionDestinationContext : NSObject <BSXPCCoding> {

	NSString* _title;
	NSString* _bundleId;
	NSURL* _URL;
	NSString* _sceneIdentifier;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                     //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * sceneIdentifier;              //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)systemNavigationActionContextWithTitle:(id)arg1 andURL:(id)arg2 ;
+(id)systemNavigationActionContextWithTitle:(id)arg1 bundleId:(id)arg2 ;
+(id)systemNavigationActionContextWithTitle:(id)arg1 sceneIdentifier:(id)arg2 ;
+(id)systemNavigationActionContextWithURL:(id)arg1 ;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(NSString *)sceneIdentifier;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)bundleId;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)debugDescription;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSURL *)URL;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)title;
@end

