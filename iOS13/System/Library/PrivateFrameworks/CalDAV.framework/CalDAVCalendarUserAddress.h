/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)compare:(id)arg1 ;
-(NSURL *)address;
-(void)setAddress:(NSURL *)arg1 ;
-(long long)preferred;
-(void)setPreferred:(long long)arg1 ;
-(id)initWithAddress:(id)arg1 preferred:(long long)arg2 ;
@end

