/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

@class NSDate, NSString, NSData;


@protocol VSAuthenticationToken <NSObject>
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,copy,readonly) NSData * serializedData; 
@required
-(NSData *)serializedData;
-(void)setBody:(id)arg1;
-(BOOL)isOpaque;
-(NSString *)body;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(id)initWithSerializedData:(id)arg1;
-(BOOL)isFromUnsupportedProvider;

@end

