/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSString, NSDictionary;

@interface TUMomentsProvider : NSObject {

	BOOL _remoteMomentsAvailable;
	long long _streamToken;
	NSString* _requesterID;
	NSDictionary* _remoteIDSDestinations;

}

@property (nonatomic,readonly) long long streamToken;                                                    //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * requesterID;                                              //@synthesize requesterID=_requesterID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * remoteIDSDestinations;                                //@synthesize remoteIDSDestinations=_remoteIDSDestinations - In the implementation block
@property (getter=isRemoteMomentsAvailable,nonatomic,readonly) BOOL remoteMomentsAvailable;              //@synthesize remoteMomentsAvailable=_remoteMomentsAvailable - In the implementation block
-(BOOL)isEqualToProvider:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(long long)streamToken;
-(NSString *)requesterID;
-(NSDictionary *)remoteIDSDestinations;
-(BOOL)isRemoteMomentsAvailable;
-(id)initWithCall:(id)arg1 ;
@end

