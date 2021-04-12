/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSString;

@interface _MFEmailAddress : NSObject {

	NSString* _address;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * fullAddress; 
@property (nonatomic,copy,readonly) NSString * address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(id)initWithAddress:(id)arg1 ;
-(NSString *)fullAddress;
-(id)initWithAddress:(id)arg1 displayName:(id)arg2 ;
-(NSString *)address;
-(NSString *)displayName;
@end

