/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSArray;

@interface SSVRedeemCodeMetadata : NSObject <NSCopying> {

	NSDictionary* _dictionary;
	NSString* _inputCode;

}

@property (nonatomic,readonly) BOOL allowsAutoSubmission; 
@property (nonatomic,readonly) NSDictionary * redeemCodeDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * code; 
@property (nonatomic,readonly) NSString * codeType; 
@property (nonatomic,copy) NSString * inputCode;                                 //@synthesize inputCode=_inputCode - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
-(NSString *)codeType;
-(id)initWithRedeemCodeDictionary:(id)arg1 ;
-(void)setInputCode:(NSString *)arg1 ;
-(BOOL)allowsAutoSubmission;
-(NSDictionary *)redeemCodeDictionary;
-(NSArray *)items;
-(NSString *)code;
-(NSString *)inputCode;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

