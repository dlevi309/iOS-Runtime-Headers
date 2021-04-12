/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(void)setContactId:(NSURL *)arg1 ;
-(NSData *)forwardGeoProtobuf;
-(void)setForwardGeoProtobuf:(NSData *)arg1 ;
-(NSString *)contactName;
-(NSURL *)contactId;
-(NSString *)addressLabel;
-(void)setAddressLabel:(NSString *)arg1 ;
-(void)setContactName:(NSString *)arg1 ;
@end

