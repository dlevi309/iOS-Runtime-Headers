/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/


@class NSString;

@interface MFQuotedContentAttribution : NSObject {

	long long _type;
	NSString* _senderName;

}

@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderName;              //@synthesize senderName=_senderName - In the implementation block
+(id)noAttribution;
+(id)unknownAttribution;
+(id)attributionWithSenderName:(id)arg1 ;
-(id)debugDescription;
-(long long)type;
-(NSString *)senderName;
-(id)initWithType:(long long)arg1 senderName:(id)arg2 ;
@end

