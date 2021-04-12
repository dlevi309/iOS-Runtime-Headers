/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@class NSString;

@interface ANSenderContext : NSObject {

	BOOL _isValidDevice;
	NSString* _senderCorrelationIdentifier;

}

@property (nonatomic,retain) NSString * senderCorrelationIdentifier;              //@synthesize senderCorrelationIdentifier=_senderCorrelationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isValidDevice;                                  //@synthesize isValidDevice=_isValidDevice - In the implementation block
-(void)setSenderCorrelationIdentifier:(NSString *)arg1 ;
-(NSString *)senderCorrelationIdentifier;
-(id)description;
-(BOOL)isValidDevice;
-(void)setIsValidDevice:(BOOL)arg1 ;
@end

