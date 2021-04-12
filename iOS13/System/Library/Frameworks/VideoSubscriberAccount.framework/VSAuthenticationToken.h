/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

@class NSDate, NSString, NSData;


@protocol VSAuthenticationToken <NSObject>
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,copy,readonly) NSData * serializedData; 
@required
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(BOOL)isOpaque;
-(void)setBody:(id)arg1;
-(NSString *)body;
-(NSData *)serializedData;
-(id)initWithSerializedData:(id)arg1;
-(BOOL)isFromUnsupportedProvider;

@end

