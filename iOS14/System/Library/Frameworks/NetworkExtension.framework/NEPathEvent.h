/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NSString;

@interface NEPathEvent : NSObject {

	long long _type;
	NSString* _bundleID;

}

@property (readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(NSString *)bundleID;
-(long long)type;
-(id)initWithType:(long long)arg1 bundleID:(id)arg2 ;
@end

