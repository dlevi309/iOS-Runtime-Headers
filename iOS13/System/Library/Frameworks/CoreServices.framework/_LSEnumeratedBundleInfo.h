/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class NSString;

@interface _LSEnumeratedBundleInfo : NSObject {

	BOOL _isPlaceholder;
	NSString* _bundleID;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL isPlaceholder;               //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleID;
-(BOOL)isPlaceholder;
-(id)initWithBundleID:(id)arg1 isPlaceholder:(BOOL)arg2 ;
@end

