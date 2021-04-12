/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSString;

@interface CNGeminiInteraction : NSObject {

	long long _transport;
	long long _directionality;
	NSString* _handle;
	NSString* _contactIdentifier;

}

@property (nonatomic,readonly) long long transport;                            //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) long long directionality;                       //@synthesize directionality=_directionality - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                         //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
-(NSString *)contactIdentifier;
-(NSString *)handle;
-(long long)transport;
-(id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3 destinationContactIdentifier:(id)arg4 ;
-(id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3 ;
-(long long)directionality;
@end

