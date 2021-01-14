/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


#import <Intents/Intents-Structs.h>
@class NSString;

@interface INWidgetDescriptor : NSObject {

	NSString* _extensionBundleIdentifier;
	NSString* _kind;
	NSString* _intentClassName;
	long long _preferredSizeClass;

}

@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                                   //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * intentClassName;                        //@synthesize intentClassName=_intentClassName - In the implementation block
@property (nonatomic,readonly) long long preferredSizeClass;                           //@synthesize preferredSizeClass=_preferredSizeClass - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize; 
-(CGSize)preferredSize;
-(NSString *)intentClassName;
-(NSString *)kind;
-(id)description;
-(NSString *)extensionBundleIdentifier;
-(id)_extensionRecordWithError:(id*)arg1 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 intentClassName:(id)arg3 preferredSizeClass:(long long)arg4 ;
-(BOOL)supportsIntent:(id)arg1 ;
-(long long)preferredSizeClass;
@end

