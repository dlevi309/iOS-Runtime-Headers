/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NSString;

@interface NEPathEvent : NSObject {

	long long _type;
	NSString* _bundleID;

}

@property (readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(long long)type;
-(NSString *)bundleID;
-(id)initWithType:(long long)arg1 bundleID:(id)arg2 ;
@end

