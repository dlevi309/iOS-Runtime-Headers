/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)handle;
-(NSString *)contactIdentifier;
-(long long)transport;
-(id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3 destinationContactIdentifier:(id)arg4 ;
-(id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3 ;
-(long long)directionality;
@end

