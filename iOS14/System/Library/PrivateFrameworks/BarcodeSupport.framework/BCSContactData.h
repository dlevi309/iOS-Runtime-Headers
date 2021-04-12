/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/BCSParsedDataPrivate.h>

@class CNContact, NSString;

@interface BCSContactData : NSObject <BCSParsedDataPrivate> {

	CNContact* _contact;

}

@property (nonatomic,copy,readonly) CNContact * contact;                      //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * extraPreviewText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(CNContact *)contact;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extraPreviewText;
@end

