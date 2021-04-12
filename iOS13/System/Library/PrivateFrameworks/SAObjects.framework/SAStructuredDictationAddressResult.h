/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL, NSData;

@interface SAStructuredDictationAddressResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * addressLabel; 
@property (nonatomic,copy) NSURL * contactId; 
@property (nonatomic,copy) NSString * contactName; 
@property (nonatomic,copy) NSData * forwardGeoProtobuf; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)structuredDictationAddressResult;
+(id)structuredDictationAddressResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)contactId;
-(NSString *)contactName;
-(void)setContactName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)addressLabel;
-(void)setAddressLabel:(NSString *)arg1 ;
-(void)setContactId:(NSURL *)arg1 ;
-(NSData *)forwardGeoProtobuf;
-(void)setForwardGeoProtobuf:(NSData *)arg1 ;
@end

