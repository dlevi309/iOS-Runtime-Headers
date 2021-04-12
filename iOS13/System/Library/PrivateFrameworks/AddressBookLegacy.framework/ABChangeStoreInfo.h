/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


@class NSString;

@interface ABChangeStoreInfo : NSObject {

	int _minConsumedSequenceNumber;
	int _secondMinConsumedSequenceNumber;
	NSString* _minConsumedClientIdentifier;

}

@property (assign,nonatomic) int minConsumedSequenceNumber;                       //@synthesize minConsumedSequenceNumber=_minConsumedSequenceNumber - In the implementation block
@property (nonatomic,retain) NSString * minConsumedClientIdentifier;              //@synthesize minConsumedClientIdentifier=_minConsumedClientIdentifier - In the implementation block
@property (assign,nonatomic) int secondMinConsumedSequenceNumber;                 //@synthesize secondMinConsumedSequenceNumber=_secondMinConsumedSequenceNumber - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)minConsumedClientIdentifier;
-(int)minConsumedSequenceNumber;
-(int)secondMinConsumedSequenceNumber;
-(void)setMinConsumedSequenceNumber:(int)arg1 ;
-(void)setMinConsumedClientIdentifier:(NSString *)arg1 ;
-(void)setSecondMinConsumedSequenceNumber:(int)arg1 ;
@end

