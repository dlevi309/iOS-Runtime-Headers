/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)systemNavigationActionContextWithTitle:(id)arg1 bundleId:(id)arg2 ;
+(id)systemNavigationActionContextWithURL:(id)arg1 ;
+(id)systemNavigationActionContextWithTitle:(id)arg1 andURL:(id)arg2 ;
+(id)systemNavigationActionContextWithTitle:(id)arg1 sceneIdentifier:(id)arg2 ;
-(NSString *)debugDescription;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)sceneIdentifier;
-(void)setSceneIdentifier:(NSString *)arg1 ;
@end

