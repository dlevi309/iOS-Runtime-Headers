/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class NSURLProtectionSpace, NSDate, NSData;

@interface _WBSSavedPasswordPartialCredential : NSObject {

	NSURLProtectionSpace* _protectionSpace;
	NSDate* _date;
	NSData* _persistentIdentifier;

}

@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                       //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSData * persistentIdentifier;                       //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
-(NSData *)persistentIdentifier;
-(NSDate *)date;
-(NSURLProtectionSpace *)protectionSpace;
-(id)initWithProtectionSpace:(id)arg1 date:(id)arg2 persistentIdentifier:(id)arg3 ;
@end

