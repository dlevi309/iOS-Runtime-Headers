/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/


@class NSURL;

@interface CalDAVCalendarUserAddress : NSObject {

	NSURL* _address;
	long long _preferred;

}

@property (nonatomic,retain) NSURL * address;              //@synthesize address=_address - In the implementation block
@property (assign) long long preferred;                    //@synthesize preferred=_preferred - In the implementation block
+(id)unpackCalDAVUserAdress:(id)arg1 ;
+(id)packCalDAVUserAdress:(id)arg1 ;
+(id)preferredAddress:(id)arg1 ;
+(long long)defaultPreferredAttribute;
+(id)_minPreferredAddress:(id)arg1 ;
+(id)_preferredAddressNoPreferred:(id)arg1 ;
-(long long)preferred;
-(long long)compare:(id)arg1 ;
-(void)setPreferred:(long long)arg1 ;
-(NSURL *)address;
-(void)setAddress:(NSURL *)arg1 ;
-(id)initWithAddress:(id)arg1 preferred:(long long)arg2 ;
@end

